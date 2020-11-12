#include<iostream>
using namespace std;

int record[100000];

int main(){
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        cout<<++record[a];
        if(i!=n)cout<<" ";
    }
}
