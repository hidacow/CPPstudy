#include<iostream>
using namespace std;

int main(){
    long a,b,c,d;
    cin>>a>>b>>c;
    if(a>b){d=a;a=b;b=d;}
    if(b>c){d=b;b=c;c=d;}
    if(a>b){d=a;a=b;b=d;}
    cout<<a<<" "<<b<<" "<<c;

}
