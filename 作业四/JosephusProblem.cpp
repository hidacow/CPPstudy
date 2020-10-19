#include<iostream>
using namespace std;

int main(){
    int n,m,cnt=1;
    while(cin>>n>>m){
        //find the rule: the winner is (m+1)%n
        cout<<"Case "<<cnt++<<": "<<n<<", "<<m<<", "<<(m+1)%n<<endl;
    }
}
