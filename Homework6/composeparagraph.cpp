#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int n, bookno;
    string word;
    vector<string>wordlist;
    cin >> n;   //get n
    for (int i = 1; i <= n; i++) {
        cin >> word;
        wordlist.push_back(word);   //add to wordlist
    }
    int currentlinelength = 0;
    for (int i = 0; i < wordlist.size(); i++) {
        if (currentlinelength + wordlist[i].size() > 79) {  //need to judge if length of space and word>80
            cout << endl;
            currentlinelength = 0;  //clear the counter
            i--;    //let the program judge the word again
        }else {
            if (currentlinelength > 0) { cout << " "; currentlinelength++; }    //judge and add space
            cout << wordlist[i];    //print the word
            currentlinelength += wordlist[i].size();
        }

    }

}
