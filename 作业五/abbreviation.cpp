#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;



string Abbreviate(string str) {
    string returnstr;
    istringstream istr(str);
    vector<string> wordlist;
    while (istr >> str)
        wordlist.push_back(str);    //add to wordlist

    for (int i = 0; i < wordlist.size(); i++) {
        if (wordlist[i].length() == 1)
            if (wordlist[i][0] == 'a' || wordlist[i][0] == 'A')
                continue;   //skip "a"
        if (wordlist[i].length() == 2)
        {
            if ((wordlist[i][0] == 'a' || wordlist[i][0] == 'A') && (wordlist[i][1] == 'n' || wordlist[i][1] == 'N'))
                continue;   //skip"an"
            if ((wordlist[i][0] == 'o' || wordlist[i][0] == 'O') && (wordlist[i][1] == 'f' || wordlist[i][1] == 'F'))
                continue;   //skip"of"
        }
        if (wordlist[i].length() == 3)
        {
            if ((wordlist[i][0] == 'a' || wordlist[i][0] == 'A') && (wordlist[i][1] == 'n' || wordlist[i][1] == 'N') && (wordlist[i][2] == 'd' || wordlist[i][2] == 'D'))
                continue;   //skip"and"
            if ((wordlist[i][0] == 't' || wordlist[i][0] == 'T') && (wordlist[i][1] == 'h' || wordlist[i][1] == 'H') && (wordlist[i][2] == 'e' || wordlist[i][2] == 'E'))
                continue;   //skip"the"
            if ((wordlist[i][0] == 'f' || wordlist[i][0] == 'F') && (wordlist[i][1] == 'o' || wordlist[i][1] == 'O') && (wordlist[i][2] == 'r' || wordlist[i][2] == 'R'))
                continue;   //skip"for"
        }
        returnstr += wordlist[i][0];    //shouldn't toupper() the letter
        for (int l = 0; l <= wordlist[i].length(); l++)
            if (wordlist[i][l] == '-')
                returnstr += wordlist[i][l + 1];   //add the first letter after "-" even the word after it is "a","an",etc.
    }

    return returnstr;
}

int main() {
    string str;
    vector<string>result;
    int cnt = 0;
    while (getline(cin, str)) {
        cout << "Case " << ++cnt << ": " << Abbreviate(str) << endl;
    }

}
