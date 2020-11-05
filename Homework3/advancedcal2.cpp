#include<iostream>
#include<cmath>
#include<memory.h>
#include<string.h>
using namespace std;
//using FFT method to calculate
//Cannot compile in VS2019
typedef long long ll;
typedef double db;
const int N=1e5+10,inf=0x3f3f3f3f;
const db pi=acos(-1);
const ll P[]= {1,10,100,1000,10000};
struct cpl {
    db x,y;
    cpl operator-(cpl& b) {return {x-b.x,y-b.y};}
    cpl operator+(cpl& b) {return {x+b.x,y+b.y};}
    cpl operator*(cpl& b) {return {x*b.x-y*b.y,x*b.y+y*b.x};}
} A[N],B[N];
void change(cpl* a,int n) {
    for(int i=1,j=n>>1,k; i<n-1; ++i) {
        if(i<j)swap(a[i],a[j]);
        k=n>>1;
        while(j>=k)j-=k,k>>=1;
        j+=k;
    }
}
void FFT(cpl* a,int n,int f) {
    change(a,n);
    for(int k=1; k<n; k<<=1) {
        cpl wn= {cos(pi*f/k),sin(pi*f/k)};
        for(int i=0; i<n; i+=k<<1) {
            cpl w{1,0};
            for(int j=i; j<i+k; ++j) {
                cpl x=a[j],y=w*a[j+k];
                a[j]=x+y,a[j+k]=x-y;
                w=w*wn;
            }
        }
    }
    if(!~f)for(int i=0; i<n; ++i)a[i].x/=n,a[i].y/=n;
}
struct Bigint {
    static const int N=1e5+10;
    static const int bit=4;
    static const ll base=pow(10,bit);
    int n;
    ll a[N];
    ll& operator[](int x) {return a[x];}
    void init(ll x) {
        memset(a,0,sizeof a);
        a[0]=x,n=0;
    }
    void init(char* s) {
        memset(a,0,sizeof a);
        int m=strlen(s);
        for(int i=0; i<m; ++i)a[(m-1-i)/bit]+=(s[i]-'0')*P[(m-1-i)%bit];
        n=(m-1)/bit;
    }
    void Mul(Bigint& b) {
        int m;
        for(m=1; m<=n*2||m<=b.n*2; m<<=1);
        for(int i=0; i<m; ++i)A[i]= {a[i],0},B[i]= {b[i],0};
        FFT(A,m,1),FFT(B,m,1);
        for(int i=0; i<m; ++i)A[i]=A[i]*B[i];
        FFT(A,m,-1);
        for(int i=0; i<m; ++i)a[i]=A[i].x+0.5;
        for(int i=0; i<m; ++i) {
            if(a[i]>=base) {
                a[i+1]+=a[i]/base;
                a[i]%=base;
                if(i==m-1)++m;
            }
        }
        for(n=m-1; n>1&&!a[n]; --n);
    }

    void pr() {
        for(int i=n; i>=0; --i) {
            if(i==n)printf("%lld",a[i]);
            else printf("%04lld",a[i]);
        }
        puts("");
    }
} a,b;
char s1[N],s2[N];

int main() {
    int cnt=0;
    while(scanf("%s%s",s1,s2)==2) {
        cout<<"Case "<<++cnt<<": "<<s1<<"*"<<s2<<"=";
        a.init(s1),b.init(s2);
        a.Mul(b);
        a.pr();
    }
    return 0;
}
