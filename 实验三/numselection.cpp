#include<iostream>
#include<cmath>
using namespace std;

int x[21];//create an array of input x
int ans=0;//use to print answer,need to be global
int n,k;//global input n and k


bool isprime(int n){
    bool prime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(n==2)prime=true;
    if(n==1)prime=false;
    if(n==0)prime=false;//Key to get some data point right: sum might be 0 or 1 ?!
    return prime;
}

void selection(int selected,int sum,int starti){//selected=count of selected
    if(selected == k){//end of selection, judge it and add to answer
        if(isprime(sum))
            ans++;
        return;//exit function right away
    }

    for(int i=starti;i<=n; i++)
        selection(selected+1,sum+x[i],i+1);
    //selected+1: already selected 'selected' numbers, now select 'selected+1'
    //sum+x[i]: now pass sum+x[i] to the next call of function
    //i+1: to prevent duplicate x[i] selections, we need to select x[] from i+1 in the next call
    return;
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>x[i];//get input and put into the x array(start from x[1] to x[n])
    }
    selection(0,0,1);//currently nothing selected, start from 0; inital sum=0; array index begin at 1
    cout<<ans;//output answer
}
