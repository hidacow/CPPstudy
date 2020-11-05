#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
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
    for(int i=2;i<=n/3;i++){//i must <=n/3
        if (!isprime(i))continue;//if i is not prime then skip
        for(int j=i;j<=n/3;j++){
            if(!isprime(j))continue;//if j is not prime then skip
            if(isprime(n-i-j)){//n-i-j must be prime in order to satisfy the conjecture
                cout<<i<<" "<<j<<" "<<n-i-j<<endl;
                return 0;//exit program right away, needn't print all
            }
        }
    }
}
