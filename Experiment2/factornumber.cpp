#include<iostream>
using namespace std;
int num;//set global, need to use in the function

void fact(int a,int n){
    for(int i=a;i<n;i++){
        if(n%i==0 && i<=n/i){
            num++;
            fact(i,n/i);
        }
        if(i>n/i)break;
    }


}


int main(){
    long a,n;
    cin>>n;
    for(long i=1;i<=n;i++){
        cin>>a;
        num=1;
        fact(2,a);
        cout<<num<<endl;
    }
}
