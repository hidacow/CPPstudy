#include<iostream>
#include<string>
#include<algorithm>
#include<memory.h>

using namespace std;
string a,b;
int k;
int c[1000001];
int main()
{
    while(cin>>a>>b){
        bool ispositive;
        ispositive=((a[0]!='-')==(b[0]!='-'));
        if(a=="0"||b=="0"){
            cout<<"0"<<endl;
            continue;
        }
        if(a[0]=='+'||a[0]=='-')a=a.substr(1,a.size()-1);
        if(b[0]=='+'||b[0]=='-')b=b.substr(1,b.size()-1);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++)
            for(int j=0;j<b.size();j++)
                c[i+j]+=(a[i]-48)*(b[j]-48);

        for(k=0;k<=a.size()+b.size();k++)
            c[k]+=c[k-1]/10,c[k-1]%=10;
        while(!c[k]&&k>=1)k--;
        if(!ispositive)cout<<"-";
        for(;k>=0;k--)cout<<c[k];
        memset(c,0,sizeof(c));
        cout<<endl;
    }
    return 0;
}
