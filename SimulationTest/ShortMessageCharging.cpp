#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,m,length;
    double d,sum=0;
    cin>>n>>m>>d;
    for(int i=1;i<=n;i++){
        cin>>length;
        sum+=(d*(length/m+1-(length%m==0)));    //if the length%m==0 needn't +1
    }
    cout<<fixed<<setprecision(2)<<sum;
}
