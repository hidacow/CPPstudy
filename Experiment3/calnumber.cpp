#include<iostream>
using namespace std;

int ans[1001];//n<=1000


int main(){
    int n;
    cin>>n;
    ans[0]=1;
    ans[1]=1;
    //ans[2]=2;
    //ans[3]=2;
    //ans[4]=4;
    //ans[5]=4;
    //ans[6]=6;
    //ans[7]=6;
    //discover the rule
    for(int i=2;i<=n;i++){//make array of answer to the requested n
        if(i%2==0)ans[i]=ans[i-1]+ans[i/2];
        else ans[i]=ans[i-1];
    }

    cout<<ans[n];//print the answer right away
}
