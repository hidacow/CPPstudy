#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n,cnt;
    vector<int>a;
    bool flag;
    while(cin>>n){
        a.push_back(n);
        if (cin.get()=='\n'){
            if(flag==true){
                sort(a.begin(),a.end());
                cout<<"Case "<<++cnt<<": ";
                for(vector<int>::iterator it=a.begin(); it!=a.end(); it++){
                    cout<<*it<<" ";
                }
                cout<<"\b\n";
                a.clear();
                flag=false;
            }else flag=true;
        }


    }
}
