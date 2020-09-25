#include <iostream>
using namespace std;
int main() {
    int a,n,m,x,i,k;
    bool found;
    cin>>a>>n>>m>>x;
    int u[16]={0,a};
    int d[16]={0,0};
    int p[16]={0,a};
    p[n-1]=m;
    if(x==1) {
        cout<<a;//if require 1st stop then print a
        return 0;//exit program
    }
    for(k=0;k<=20;k++){
        u[2]=k;
        d[2]=k;
        p[2]=a;
        for(i=3;i<=n-1;i++){
            u[i]=u[i-1]+u[i-2];
            d[i]=u[i-1];
            if(i==n-1){
                if(p[i]==p[i-1]+u[i]-d[i]){found=true;break;}
            }else{break;}
            p[i]=p[i-1]+u[i]-d[i];

        }
        if(found)break;
    }
    cout<<k;

}
