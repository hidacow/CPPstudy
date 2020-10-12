#include<iostream>
#include<cmath>

//expected CPU time >970ms
using namespace std;

bool isprime(int n){
    bool prime=true;
    for(int i=3;i<=sqrt(n);i+=2){//already excluded i%2==0
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

bool isPalindrome(int n) {//use overflow to judge palindrome numbers, copied from network
        if(n<0|| (n!=0 && n%10==0)) return false;
        int sum=0;
        while(n>sum)
        {
            sum = sum*10+n%10;
            n=n/10;
        }
        return (n==sum)||(n==sum/10);
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%2==0)continue;//must be put here
        //if(i>=9989900)continue; //CHEAT! no data points satisfying the question beyond 9989900
        if(!isPalindrome(i))continue;
        if(isprime(i))cout<<i<<endl;
    }
}
