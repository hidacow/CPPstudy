#include<iostream>
#include<vector>
#include<set>
using namespace std;
int n,t,num,nation,i;
int arvtime[100001];
vector<int>passengers[100001];
set<int>nationalities;

//First version
//This will cause TLE

int main(){

    cin>>n;
    while(n--){
        cin>>t>>num;
        arvtime[i++]=t;
        while(num--){
            cin>>nation;
            passengers[i].push_back(nation);
        }

        for(int j=0;j<i;j++){
            if(arvtime[j]>(t-86400))
                for(int k=0;k<passengers[j+1].size();k++)
                    nationalities.insert(passengers[j+1][k]);
        }
        cout<<nationalities.size()<<endl;
        nationalities.clear();
    }

}
