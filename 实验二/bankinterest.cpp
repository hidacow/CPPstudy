#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double R,M,Y;
    cin>>R>>M>>Y;
    unsigned long long a;
    a=M*pow((1+R/100),Y);
    cout<<a;
}
