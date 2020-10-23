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
            sort(sortedscore.begin(), sortedscore.end());   //reverse and sort the score
            reverse(sortedscore.begin(), sortedscore.end());
            int j = 0;
            int i = 0;
            for (; i <= score.size() - 1; i++) {
                j = 0;
                while (sortedscore[j] != score[i])j++;
                if(i != score.size() - 1)cout << j + 1 << ", ";  //search the score in the sorted array and print its rank
                else cout << j + 1 << endl;  //the last one do not have ", " after it
            }
            score.clear();  //clear the array
            sortedscore.clear();
        }
    }

}
