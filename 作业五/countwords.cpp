#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


int Countword(string str) {
    istringstream istr(str);
    vector<string> wordlist;
    while (istr >> str)
        wordlist.push_back(str);
    return wordlist.size();
}



int main() {
    string str;
    int cnt = 0;
    while (getline(cin, str)) {
        cout << "Case " << ++cnt << ": " << Countword(str) << endl;
    }

}
