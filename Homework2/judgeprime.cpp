#include<iostream>
#include<cmath>
using namespace std;

bool isprime(long n){
    bool prime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(n==2)prime=true;
    return prime;
}

int main(){
    long n,no=1;
    while(cin>>n){
        if(isprime(n)){
            cout<<"Case "<<no++<<": Number "<<n<<" is prime."<<endl;
        }else{
            cout<<"Case "<<no++<<": Number "<<n<<" is not prime."<<endl;
        }
    }
}
