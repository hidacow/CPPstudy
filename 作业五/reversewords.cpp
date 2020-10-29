#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


string Reverseword(string str) {
    string returnstr;
    istringstream istr(str);
    vector<string> wordlist;    //create a wordlist vector
    while (istr >> str) //get words from istr
        wordlist.push_back(str);
    for (int i = wordlist.size()-1; i>=0; i--){
        returnstr += wordlist[i];
        if(i!=0)returnstr +=" ";
    }
    return returnstr;
}



int main() {
    string str;
    int cnt = 0;
    while (getline(cin, str)) {
        cout << "Case " << ++cnt << ": " << Reverseword(str) << endl;   //there should always be a space after "Case #:"
    }

}
