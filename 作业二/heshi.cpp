#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    unsigned long long num,n,no=1,sum;
    while(cin>>num>>n){
        cout<<"Case "<<no<<": "<<num;
        sum=num;
        for(int i=2;i<=n;i++){
            sum+=num*(pow(10,i)-1)/9;
            cout<<" + "<<fixed<<setprecision(0)<<num*(pow(10,i)-1)/9;
        }
        cout<<" = "<<sum<<endl;
        no+=1;
    }
}
