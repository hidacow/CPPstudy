#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        bool flag = false;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ' || str[i] == '\t') {
                str.erase(str.begin() + i);
                i--;
            }
            else break;
        }
        for (int i = str.size()-1; i >=0; i--) {
            if (str[i] == ' ' || str[i] == '\t') {
                str.erase(str.begin() + i);
                i= str.size();
            }
            else break;
        }
        cout << str << endl;
    }


}
