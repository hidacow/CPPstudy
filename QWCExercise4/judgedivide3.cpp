#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int sum=0;
        for(char c:str){
            if(c>='0'&&c<='9')sum+=(c-'0');
        }
        if(sum%3==0)cout<<"Y";
        else cout<<"N";
        cout<<endl;
    }

}
