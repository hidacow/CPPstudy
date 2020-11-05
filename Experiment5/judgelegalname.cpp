#include <iostream>
#include <string>
using namespace std;

//This problem includes multiple input
bool judge(string s)
{
    char c = s[0];  // get first char
    if (!((c>='a' && c<='z') || (c>='A' && c<='Z') || (c == '_')))return false;  //if is not letters or '_' then not valid
    for(int i=1; i<s.size(); i++)
    {
        c = s[i];
        if ((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z') || (c == '_'))continue;  //valid
        else return false;  //not valid, return immediately
    }

    return true;
}

int main() {
	string str;
	while(getline(cin,str)){    //need to use getline in order to AC
        if (judge(str)) {
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
	return 0;
}
