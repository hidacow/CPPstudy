#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double h,r;
    const double pi=3.1415926;
    cin>>h>>r;
    cout<<fixed<<setprecision(4)<<pi*r*r*2+2*pi*r*h;
    cout<<", ";
    cout<<fixed<<setprecision(5)<<pi*r*r*h;
}
