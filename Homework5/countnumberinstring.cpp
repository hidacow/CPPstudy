#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int cnt=0;
        for(int i=0;i<str.size();i++)
            if(str[i]>='0'&&str[i]<='9')cnt++;  //judge number
        cout<<cnt<<endl;
    }

}
