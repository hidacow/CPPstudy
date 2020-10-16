#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> a;
    int num,cnt=0;
    char ch;
    int flag = 0;
    while (cin >> num) {
        a.push_back(num);   //put it into the array
        ch = getchar(); //get the input char
        if (ch == '\n' || ch == EOF) {//detect end of input
            flag++; //when entered "ENTER",count it
            if (flag == 2) {    //sort when entered two lines of array
                cout << "Case " << ++cnt << ":";
                sort(a.begin(), a.end());
                for (int j = 0; j < a.size(); j++) {
                    cout << " " << a[j];
                }
                cout << endl;
                a.clear();
                flag = 0;
            }

        }
    }
}
