#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
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

bool ispalindromic(long n){
    string str;
    str=to_string(n);
    reverse(str.begin(),str.end());
    if(str==to_string(n))return true;
    else return false;
}

int main(){
    long a,b;
    cin>>a>>b;
    for(long i=a;i<=b;i+=){
        if(isprime(i))cout<<i<<endl;
    }
}
