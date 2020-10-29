#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str;
    vector<string>result;
    string numstr;
    int cnt=0;
    while(getline(cin,str)){
        for(int i=0;i<str.size();i++){
            if(str[i]>='0'&&str[i]<='9'){
                numstr+=str[i];
                if(i==str.size()-1){
                    result.push_back(numstr);
                    numstr="";
                }
            }else{
                if(numstr!=""){
                    result.push_back(numstr);
                    numstr="";
                }else numstr="";
            }
        }
        cout<<"Case "<<++cnt<<": ("<<result.size()<<")";
        for(int i=0;i<result.size();i++){
            cout<<" "<<result[i];
        }
        cout<<endl;
        numstr="";
        result.clear();
    }

}
