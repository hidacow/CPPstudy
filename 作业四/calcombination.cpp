#include<iostream>
#include<iomanip>
using namespace std;

double C(int n,int m){
    double up=1,down=1;
    for(int i=1;i<=n;i++)up*=i;
    for(int j=1;j<=m;j++)down*=j;
    for(int k=1;k<=n-m;k++)down*=k;
    return up/down;
}

int main(){
    int m,n,cnt=1;
    while(cin>>m>>n){
        cout<<"Case "<<cnt++<<":"<<endl<<fixed<<setprecision(0)<<C(m,n)<<endl;

    }
}
