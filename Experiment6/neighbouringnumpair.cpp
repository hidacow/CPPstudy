#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,a,cnt=0;
    vector<int>num;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        num.push_back(a);
    }
    sort(num.begin(),num.end());    //sort the numbers
    for(int i=0;i<num.size();i++){
        for(int j=1;j<num.size()-i;j++){
            if(num[i+j]-num[i]==1)cnt++;    //judge whether is neighbouring
            else if(num[i+j]-num[i]==0)continue;    //in case there's situations like 2,3,3,3,4
            else break;
        }
    }
    cout<<cnt;
}
