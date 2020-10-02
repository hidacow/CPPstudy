#include<iostream>
using namespace std;

int main(){
    unsigned long long m,n;
    cin>>m>>n;
    if(m%n==0){
        cout<<m<<" = "<<m/n<<"*"<<n<<endl;
    }else{
        cout<<m<<" = "<<m/n<<"*"<<n<<" + "<<m%n<<endl;
    }
}
