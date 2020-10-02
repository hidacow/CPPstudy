#include<iostream>
using namespace std;

int main(){
    long n,sum,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum+=a;

    }
    cout<<n<<", "<<sum;
}
