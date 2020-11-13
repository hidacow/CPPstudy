#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        if(str[0]=='+'||str[0]=='-')str=str.substr(1,str.size()-1);
        int sumodd=0,sumeven=0;
        for(int i=str.size()-1;i>=0;i-=2){
            sumodd+=(str[i]-'0');
        }
        for(int i=str.size()-2;i>=0;i-=2){
            sumeven+=(str[i]-'0');
        }
        if((sumodd-sumeven)%11==0)cout<<"Y";
        else cout<<"N";
        cout<<endl;
    }

}
