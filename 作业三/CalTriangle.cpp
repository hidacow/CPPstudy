#include<iostream>
#include<cmath>
using namespace std;

double CalSize(double a,double b,double c){
    double p;
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double CalCircumference(double a,double b,double c){
    return a+b+c;
}

bool isTriangle(double a,double b,double c){
    if(a+b>c&&b+c>a&&a+c>b){
        return true;
    }else{
        return false;
    }
}

int main(){
    double a,b,c;
    int i;
    while(cin>>a>>b>>c){
        cout<<"Case "<<++i<<": ";
        if (isTriangle(a,b,c)){
            cout<<CalCircumference(a,b,c)<<", "<<CalSize(a,b,c)<<endl;
        }else{
            cout<<"不能构成三角形"<<endl;
        }
    }

}
