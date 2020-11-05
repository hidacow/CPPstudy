#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int m, bookno;
    string authors;
    vector<vector<int>>booklist(26, vector<int>()); //define a booklist vector for 26 authors
    string strm, strl;
    while (getline(cin, strm)) {   //This problem includes multiple input
        istringstream istrm(strm);
        istrm >> m;
        int maxbooks = 0, pauthor = -1;  //initialize
        for (int i = 1; i <= m; i++) {
            getline(cin, strl);
            istringstream istrl(strl);
            istrl >> bookno >> authors;
            for (auto a : authors) { //for every char in string authors
                booklist[a - 'A'].push_back(bookno);    //add to its booklist
                if (booklist[a - 'A'].size() > maxbooks) {//judge if it's the current most productive author
                    maxbooks = booklist[a - 'A'].size();
                    pauthor = a - 'A';
                }
            }
        }
        cout << (char)(pauthor + 'A') << endl << maxbooks << endl;  //print the most productive author
        for (int i = 0; i < maxbooks; i++)
            cout << booklist[pauthor][i] << endl;   //print books it wrote
        for (int i = 0; i < 26; i++)booklist[i].clear();    //clear the booklist of every author
    }
}
