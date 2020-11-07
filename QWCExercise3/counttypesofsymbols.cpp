#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        int spaces=0,nums=0,uletters=0,lletters=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==' ')spaces++;
            if(str[i]>='0'&&str[i]<='9')nums++;
            if(str[i]>='a'&&str[i]<='z')lletters++;
            if(str[i]>='A'&&str[i]<='Z')uletters++;
        }
        cout<<spaces<<", "<<nums<<", "<<uletters<<", "<<lletters<<endl;
    }


}
