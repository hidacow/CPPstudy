#include<iostream>

using namespace std;

long countzero(long n){
    if(n<5){
        return 0;
    }else{
        return n/5+countzero(n/5);
    }
}

int main(){
    long n,no=1;
    while(cin>>n){
        cout<<"Case "<<no<<": "<<n<<", "<<countzero(n)<<endl;
        no++;
    }
}
