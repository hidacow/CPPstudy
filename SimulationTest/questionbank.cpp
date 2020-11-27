#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>qbank,qbank2;

    int n,x,num;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>num;
        qbank.push_back(num);   //put it to the question bank
    }
    for(int i=0;i<qbank.size();i++){
        if(qbank[i]!=x)qbank2.push_back(qbank[i]);  //put it to another question bank
    }
    cout<<qbank2.size()<<endl;
    for(int i=0;i<qbank2.size();i++){
        cout<<qbank2[i];
        if(i!=qbank2.size()-1)cout<<" ";
    }
}
