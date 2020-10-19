#include<iostream>
#include<vector>
using namespace std;

void printmatrix(int n) {
    if (n == 1) { cout << "1" << endl; return; }
    if (n == 2) { cout << "1 1" << endl << "1 1" << endl; return; }
    vector<vector<int>> mat(52, vector<int>(52));
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            mat[i][j] = 1;
    for (int t = 1; t <= n / 2; t++)
        for (i = t; i <= n-t; i++)
            for (j = t; j <= n-t; j++)
                if (!(i == t || j == t || i == n + 1 - t || j == n + 1 - t))
                    mat[i][j]++;
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
