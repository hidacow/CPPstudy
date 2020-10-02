#include<iostream>
using namespace std;

long countdivision(long n){
    long cnt;
    for(int i=0;i<=n/5;i++){
        for(int j=0;j<=(n-i*5)/2;j++){
            cnt+=1;
        }
    }
    return cnt;
}


int main(){
    long n,no=1;
    while(cin>>n){
        cout<<"Case "<<no++<<": "<<n<<", "<<countdivision(n)<<endl;

    }
}
