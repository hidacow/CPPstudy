#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int num,cnt=0;
    vector<int> a;
    char ch;
    while (cin >> num) {
        a.push_back(num);
        ch = getchar();
        if (ch == '\n'||ch==EOF) {
            cout << "Case " << ++cnt << ":";
            sort(a.begin(), a.end());
            for (int j = 0; j < a.size(); j++) {
                cout << " " << a[j];
            }
            cout << endl;
            a.clear();
        }
    }
}
