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
        a.push_back(num);
        ch = getchar();
        if (ch == '\n' || ch == EOF) {
            flag++;
            if (flag == 2) {
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
