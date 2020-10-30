#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str;
    vector<string>result;
    string numstr;
    int cnt=0;
    while(getline(cin,str)){    //get the whole line as a string
        for(int i=0;i<str.size();i++){  //judge every char in the string
            if(str[i]>='0'&&str[i]<='9'){   //if is number char
                numstr+=str[i]; //add to a numstr
                if(i==str.size()-1){    //if is the last char of the line and is a number
                    result.push_back(numstr);   //put it into the answer immediately
                    numstr="";  //clear the numstr
                }
            }else{  //if is not number char
                if(numstr!=""){ //if there is numbers in the numstr
                    result.push_back(numstr);   //put it into the answer
                    numstr="";  //clear the numstr
                }
            }
        }
        cout<<"Case "<<++cnt<<": ("<<result.size()<<")";    //print it out
        for(int i=0;i<result.size();i++){
            cout<<" "<<result[i];   //print a space before each number(if there's no number, don't print spaces)
        }
        cout<<endl;
        numstr="";  //clear it
        result.clear();
    }

}
