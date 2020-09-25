#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<fixed<<setprecision(1)<<(a+b+c+d+e)/5;
    cout<<", ";
    cout<<fixed<<setprecision(1)<<pow(a*b*c*d*e,0.2);
}
