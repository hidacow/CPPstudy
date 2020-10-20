#include<iostream>
using namespace std;

long long C(int n,int m){   //in this problem long long is OK
    long long up=1,down=1;
    for(int i=1;i<=n;i++)up*=i;
    for(int j=1;j<=m;j++)down*=j;
    for(int k=1;k<=n-m;k++)down*=k;
    return up/down;
}

void printyanghuiline(int n){   //print a single line of the triangle
    for(int i=0;i<n;i++){
        cout<<C(n,i)<<" ";
    }
    cout<<"1"<<endl;    //the last element must be 1 and don't have " " after it
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
