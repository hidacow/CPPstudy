#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int cnt;
    string str;
    int i = 1,n;
    while (getline(cin, str)) { //There's multiple input
        istringstream istr(str);
        istr >> cnt;    //get cnt from the stream
        n = cnt + i - 1;    //calculate the new upper limit
        for (; i <= n; i++) {
            getline(cin, str);
            cout << "Case " << i << ": ";   //i should not be cleared in order to AC
            for (int j = 1; j <= str.size(); j++)   //reverse
                cout << str[str.size() - j];    //print it out
            cout << endl;
        }
    }
}
