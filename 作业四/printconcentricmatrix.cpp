#include<iostream>
#include<vector>
using namespace std;

void printmatrix(int n) {
    vector<vector<int>> mat(52, vector<int>(52));//define a vector
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            mat[i][j] = 1;  //initialize the array by all filling them with 1

    for (int t = 1; t <= n / 2; t++)//decrease loop range
        for (i = t; i <= n-t; i++)
            for (j = t; j <= n-t; j++)
                if (!(i == t || j == t || i == n + 1 - t || j == n + 1 - t))//if is not border element then
                    mat[i][j]++;    //add 1 to the elements in central area

    for (i = 1; i <= n; i++) {//print it out
        for (j = 1; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << mat[i][n] << endl;  //the last element in a line don't have " " after it
    }
}

int main() {
    int n, cnt = 1;
    while (cin >> n) {
        cout << "Case " << cnt++ << ":" << endl;
        printmatrix(n);
    }
}
