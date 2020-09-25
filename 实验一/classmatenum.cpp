#include<iostream>
using namespace std;

int main(){
    long x,y,z,sum;
    cin>>x>>y>>z;
    sum=(x+y+z)/2;
    cout<<sum-y<<" "<<sum-z<<" "<<sum-x;
}
