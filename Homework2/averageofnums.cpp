#include<iostream>
using namespace std;

int main(){
    double n=0,minnum=0,maxnum=0,sum=0,inputnum,average;
        n=1;
        cin>>minnum;
        maxnum=minnum;
        sum=minnum;
    while(cin>>inputnum){
        n+=1;
        if(minnum>=inputnum)minnum=inputnum;
        if(maxnum<=inputnum)maxnum=inputnum;
        sum+=inputnum;
    }
    average=(sum-maxnum-minnum)/(n-2);
    cout<<n<<", "<<minnum<<", "<<maxnum<<", "<<average;
}
