#include<iostream>
using namespace std;

int distribute(long m,long n){
    if(m==0|n==1)return 1;
    if(n>m){return distribute(m,m);}else{return distribute(m,n-1)+distribute(m-n,n);}
}

int main(){
    long t,m,n;
    cin>>t;
    for(long i=1;i<=t;i++){
        cin>>m>>n;
        cout<<distribute(m,n)<<endl;
    }
}
