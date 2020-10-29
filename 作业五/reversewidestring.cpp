#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    int cnt = 0;
    string str;
    while (getline(cin, str)) {
        cout << "Case " << ++cnt << ": \"";  //need to use "\"" 
        for (int i=str.size()-1; i >=0; i--) {
            if (str[i] <0) {    //judge whether is chinese char
                cout << str[i-1]<<str[i];   //print two char at a time
                i--;
            }
            else {
                cout << str[i]; //not chinese char
            }
        }
        cout << "\""<<endl;
    }
}
