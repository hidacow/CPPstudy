#include<iostream>
#include<cmath>
using namespace std;

double getroot1(double a,double b,double c,double delta){
    return (-b-sqrt(delta))/2/a;
}
double getroot2(double a,double b,double c,double delta){
    return (-b+sqrt(delta))/2/a;
}


int main(){
    double a,b,c,delta,r1,r2;
    int i;
    while(cin>>a>>b>>c){
        delta=b*b-4*a*c;
        r1=getroot1(a,b,c,delta);
        r2=getroot2(a,b,c,delta);
        cout<<"Case "<<++i<<": ";
        if(delta<0){
            cout<<"无实数根"<<endl;
        }else{
            if(delta==0){
                cout<<(-b)/2/a<<endl;
            }else{
                if(r1<r2)cout<<r1<<", "<<r2<<endl;  //Get rid of cases that a<0
                else cout<<r2<<", "<<r1<<endl;
            }
        }

    }

}
