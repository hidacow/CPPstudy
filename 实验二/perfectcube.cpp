#include<iostream>
using namespace std;

int main(){
    long N,a,b,c,d;
    cin>>N;
    for(a=6;a<=N;a++){
        for(b=2;b<a;b++){
            for(c=b;c<a;c++){
                for(d=c;d<a;d++){
                    if(a*a*a==b*b*b+c*c*c+d*d*d){
                        cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
                    }
                }
            }
        }
    }
}
