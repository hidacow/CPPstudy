#include<iostream>
using namespace std;

long long C(int n,int m){
    long long up=1,down=1;
    for(int i=1;i<=n;i++)up*=i;
    for(int j=1;j<=m;j++)down*=j;
    for(int k=1;k<=n-m;k++)down*=k;
    return up/down;
}

void printyanghuiline(int n){
    for(int i=0;i<n;i++){
        cout<<C(n,i)<<" ";
    }
    cout<<"1"<<endl;
}


int main(){
    int n,cnt=1;
    while(cin>>n){
        cout<<"Case "<<cnt++<<":"<<endl<<"1"<<endl;
        for(int i=1;i<=n;i++){
            printyanghuiline(i);
        }
    }
}
