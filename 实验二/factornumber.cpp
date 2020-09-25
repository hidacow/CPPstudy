#include<iostream>
#include<cmath>
using namespace std;
int num;
void fxxk(int a,int n){
    for(int i=a;i<sqrt(n);i++){
        if(n%i==0 && i<=n/i){
            num++;
            fxxk(i,n/i);
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
        fxxk(2,a);
        cout<<num<<endl;
    }
}
