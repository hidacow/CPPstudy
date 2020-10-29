#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        int ascii = str[0]; //get the first char of this line only
        if (ascii % 2 == 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
