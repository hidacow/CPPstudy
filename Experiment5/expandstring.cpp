#include<iostream>
#include<vector>
#include<sstream>
using namespace std;



void expansion(string str,int mode,int fillcnt,int isreverse){
    vector<char>ans;	//define a char vector
    switch(mode)
    {
        case 1:
        for(int i=0;i<str.size();i++){
            if(str[i]=='-'){
                if(i==0||i==str.size()-1){ans.push_back(45);continue;}	//if is first or last char print '-' right away
                if(str[i-1]=='-'||str[i+1]=='-'){ans.push_back(45);continue;}	//if its previous and next char is '-' print it right away
                if(str[i-1]>=str[i+1]){ans.push_back(45);continue;}	//if its previous char >= next char print it right away
                if((str[i-1]>='0'&&str[i-1]<='9'&&str[i+1]>='0'&&str[i+1]<='9')||(str[i-1]>='a'&&str[i-1]<='z'&&str[i+1]>='a'&&str[i+1]<='z')){
                    //judge the char
                    if(isreverse==1){
                        for(int j=str[i-1]+1;j<str[i+1];j++)	//not reverse
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j);
                    }else{
                        for(int j=str[i+1]-1;j>str[i-1];j--)	//reverse
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j);
                    }
                }else{ans.push_back(45);continue;}

            }else{
                ans.push_back(str[i]);	//needn't handle char that is not '-'
            }
        }

        break;

    case 2: //very similar to mode 1
        for(int i=0;i<str.size();i++){
            if(str[i]=='-'){
                if(i==0||i==str.size()-1){ans.push_back(45);continue;}
                if(str[i-1]=='-'||str[i+1]=='-'){ans.push_back(45);continue;}
                if(str[i-1]>=str[i+1]){ans.push_back(45);continue;}
                if(str[i-1]>='0'&&str[i-1]<='9'&&str[i+1]>='0'&&str[i+1]<='9'){
                    if(isreverse==1){
                        for(int j=str[i-1]+1;j<str[i+1];j++)
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j);
                    }else{
                        for(int j=str[i+1]-1;j>str[i-1];j--)
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j);
                    }
                }else if(str[i-1]>='a'&&str[i-1]<='z'&&str[i+1]>='a'&&str[i+1]<='z'){	//need to handle letters
                    if(isreverse==1){
                        for(int j=str[i-1]+1;j<str[i+1];j++)
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j-32);    //convert to upper case
                    }else{
                        for(int j=str[i+1]-1;j>str[i-1];j--)
                            for(int k=1;k<=fillcnt;k++)
                                ans.push_back(j-32);    //convert to upper case
                    }
                }else{ans.push_back(45);continue;}

            }else{
                ans.push_back(str[i]);
            }
        }


        break;

    case 3:
        for(int i=0;i<str.size();i++){
            if(str[i]=='-'){
                if(i==0||i==str.size()-1){ans.push_back(45);continue;}
                if(str[i-1]=='-'||str[i+1]=='-'){ans.push_back(45);continue;}
                if(str[i-1]>=str[i+1]){ans.push_back(45);continue;}
                if((str[i-1]>='0'&&str[i-1]<='9'&&str[i+1]>='0'&&str[i+1]<='9')||(str[i-1]>='a'&&str[i-1]<='z'&&str[i+1]>='a'&&str[i+1]<='z')){
                    for(int j=str[i-1]+1;j<str[i+1];j++)
                        for(int k=1;k<=fillcnt;k++)
                            ans.push_back(42);  //add char '*'

                }else{ans.push_back(45);continue;}

            }else{
                ans.push_back(str[i]);
            }
        }


        break;

    }
    for(int i=0;i<ans.size();i++)cout<<ans[i];	//print it out
}



int main() {
    int p1,p2,p3;
    string str1,str;

    while (getline(cin,str1))	//need to use getline in order to AC
    {
        istringstream istr(str1);	//define a stringstream which represents the first line
        istr>>p1>>p2>>p3;	//get p1,p2,p3 from istr
        getline(cin,str);	//get line again, get target str
        expansion(str,p1,p2,p3);	//expansion process
        cout<<endl;
    }
}
