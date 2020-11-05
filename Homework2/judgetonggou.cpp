#include<iostream>
#include<cmath>
using namespace std;

bool istonggou(long n){
    long m,t;
    t=n;
    while(n){
        m++;
        n/=10;
    }
    if((t*t-t)%(int)pow(10,(double)m)==0)
    return true;
    else
    return false;
}


int main(){
    long n,no=1;
    while(cin>>n){
        if(istonggou(n)){
            cout<<"Case "<<no++<<": "<<n<<", Yes"<<endl;
        }else{
            cout<<"Case "<<no++<<": "<<n<<", No"<<endl;
        }
    }
}
