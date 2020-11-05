#include<iostream>
using namespace std;

int main(){
    unsigned long long x,y,z,w,m,s;
    cin>>x>>y>>z;
    w=((x+z)/2+y)/2;
    m=(x+z)/2-w;
    s=x-w-m;
    cout<<w<<" "<<m<<" "<<s;
}
