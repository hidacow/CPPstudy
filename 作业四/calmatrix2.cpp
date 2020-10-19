#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    int lines,columns,cnt=0;
    double num,sum;
    while(getline(cin,str)){
        istringstream inputstr(str);
        sum=0;
        for(columns=0;inputstr>>num;columns++)sum+=num;
        for(lines=1;getline(cin,str);lines++){
            if(str.length()==0)break;
            istringstream inputstr1(str);
            while(inputstr1>>num)sum+=num;
        }
        cout<<"Case "<<++cnt<<": "<<lines<<", "<<columns<<", "<<sum<<endl;
    }
}
