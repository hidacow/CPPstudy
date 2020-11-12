#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double x;
    while(cin>>x){  //This problem includes multiple input
        if(x>=0&&x<5)cout<<fixed<<setprecision(3)<<2.5-x<<endl;
        if(x>=5&&x<10)cout<<fixed<<setprecision(3)<<2-1.5*(x-3)*(x-3)<<endl;
        if(x>=10&&x<20)cout<<fixed<<setprecision(3)<<x/2-1.5<<endl;
    }

}
