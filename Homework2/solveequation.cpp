#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,delta;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta<0){
        cout<<"无实数根"<<endl;
    }else{
        if(delta==0){
            cout<<(-b)/2/a;
        }else{
            cout<<(-b-pow(delta,0.5))/2/a<<", "<<(-b+pow(delta,0.5))/2/a<<endl;
        }
    }
}
