#include<iostream>
#include<vector>
using namespace std;



void controllights(int m,int n){
    vector<bool>lights(m+1);
    for(int i=1;i<=m;i++)
        for(int j=2;j<=n;j++)
            if(i%j==0)lights[i]=!lights[i]; //control the lights
    int cnt=0;
    for(int i=1;i<=m;i++)
        if(lights[i])cnt++; //count lit lights
    cout<<cnt<<endl;
}


int main(){
    int m,n;
    while(cin>>m>>n){
        controllights(m,n);
    }
}
