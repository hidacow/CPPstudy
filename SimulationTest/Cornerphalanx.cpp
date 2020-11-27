#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){  //lines
        for(int j=1;j<=i;j++){
            cout<<(n+1-i);
            if(j!=n)cout<<(((n+1-i)<10)?"  ":" ");  //print out the spaces
            else cout<<endl;
        }
        for(int j=n-i;j>0;j--){
            cout<<j;
            if(j!=1)cout<<((j<10)?"  ":" ");    //print out the spaces
            else cout<<endl;
        }

    }
}
