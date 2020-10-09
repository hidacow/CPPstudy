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
    int n;
    cin>>n;
    for(int i=2;i<=n/3;i++){
        if (!isprime(i))continue;
        for(int j=i;j<=n/3;j++){
            if(!isprime(j))continue;
            if(isprime(n-i-j)){
                cout<<i<<" "<<j<<" "<<n-i-j<<endl;
                return 0;
            }
        }
    }
}
