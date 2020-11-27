#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string inputstr,resultstr="";
    getline(cin,inputstr);
    for(char c:inputstr){
        if((c>='0'&&c<='9')||(c>='A'&&c<='F')||(c>='a'&&c<='f'))resultstr+=c;   //only save hex symbols
    }
    cout<<resultstr<<endl;
    long decnum;
    stringstream ss;
    ss<<hex<<resultstr;
    ss>>decnum; //convert it to dec #NOTE:may be wrong answer as it only supports numbers<2147483647
    cout<<decnum;
}
