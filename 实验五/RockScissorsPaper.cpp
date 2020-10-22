#include<iostream>
using namespace std;

void judge(string p1,string p2){
    if(p1==p2)cout<<"Tie"<<endl;    //Judge Tie situation

    //judge 6 situations
    if(p1=="Rock"&&p2=="Scissors")cout<<"Player1"<<endl;
    if(p2=="Rock"&&p1=="Scissors")cout<<"Player2"<<endl;

    if(p1=="Scissors"&&p2=="Paper")cout<<"Player1"<<endl;
    if(p2=="Scissors"&&p1=="Paper")cout<<"Player2"<<endl;

    if(p1=="Paper"&&p2=="Rock")cout<<"Player1"<<endl;
    if(p2=="Paper"&&p1=="Rock")cout<<"Player2"<<endl;
}

int main(){
    int N;
    string p1,p2;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>p1>>p2;
        judge(p1,p2);

    }
}
