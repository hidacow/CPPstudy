#include<iostream>
using namespace std;

int main(){
    unsigned long long x,y,z;
    cin>>x>>y>>z;
    x/=3;
    y+=x;
    z+=x;
    y/=3;
    x+=y;
    z+=y;
    z/=3;
    y+=z;
    x+=z;
    cout<<x<<", "<<y<<", "<<z;
}
