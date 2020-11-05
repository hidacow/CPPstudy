#include<iostream>
using namespace std;

long intimatehalf(long n){
    long t;
    for(long i=1;i<n;i++){
        if(n%i==0)t+=i;
    }
    return t;
}


int main(){
    long a,b,no=1;
    while(cin>>a>>b){
        if(a==intimatehalf(b)&&b==intimatehalf(a)){
            cout<<"Case "<<no++<<": "<<a<<", "<<b<<", Yes"<<endl;
        }else{
            cout<<"Case "<<no++<<": "<<a<<", "<<b<<", No"<<endl;
        }
    }
}
