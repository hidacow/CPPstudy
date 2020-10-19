#include<iostream>
#include<vector>
using namespace std;

void printmatrix(int n) {
    if (n == 1) { cout << "1" << endl; return; }
    vector<vector<int>> mat(n + 1, vector<int>(n + 1));
    mat[1][n / 2 + 1] = 1;
    int i = 2, j, q = n / 2 + 1, p = 1;
    while (i <= n * n) {
        if (i % n == 1) {
            if (p + 1 > n)p = 1;
            else p++;
        }
        else {
            if (q + 1 > n)q = 1;
            else q++;
            if (p - 1 < 1)p = n;
            else p--;
        }
        mat[p][q] = i;
        i++;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << mat[i][n] << endl;
    }
}

int main() {
    int n, cnt = 1;
    while (cin >> n) {
        cout << "Case " << cnt++ << ":" << endl;
        printmatrix(n);
    }
}
