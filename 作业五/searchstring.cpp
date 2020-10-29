#include<iostream>
#include<string>

using namespace std;

int main() {
    string target,str;
    int cnt = 0;
    while (getline(cin, target)) {
        getline(cin, str);
        //string::size_type pos=str.find(target);
        auto pos=str.find(target);  //The actual type of pos is above, you can use auto to replace "string::size_type"
        if(pos==string::npos)cout << "Case " << ++cnt << ": -1"<< endl; //not found
        else cout << "Case " << ++cnt << ": " << pos << endl;   //print positon
    }

}
