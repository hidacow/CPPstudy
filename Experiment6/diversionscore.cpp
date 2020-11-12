#include<iostream>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        cout<<a*0.45+b*0.45+c*0.1<<endl;
    }
}
