#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<double>score;
vector<double>sortedscore;

int main() {
    char ch;
    double num, cnt = 0;
    while (cin >> num) {
        score.push_back(num);
        sortedscore.push_back(num);
        ch = getchar();
        if (ch == '\n' || ch == EOF) {
            cout << "Case " << ++cnt << ":" << endl;
            sort(sortedscore.begin(), sortedscore.end());
            reverse(sortedscore.begin(), sortedscore.end());
            int j = 0;
            int i = 0;
            for (; i < score.size() - 1; i++) {
                j = 0;
                while (sortedscore[j] != score[i])j++;
                cout << j + 1 << ", ";
            }

            i = score.size() - 1;
            j = 0;
            while (sortedscore[j] != score[i])j++;
            cout << j + 1 << endl;
            score.clear();
            sortedscore.clear();
        }
    }

}
