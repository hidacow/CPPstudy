
#include <iostream>
#include<iomanip>
using namespace std;
#define N 100

int a[N][N];

int main(void)
{
    int m, n, i, j;

    cin >> m >> n;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    int sum=0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if(i==0||j==0||i==m-1||j==n-1)sum+= a[i][j];
    cout <<sum<< endl;

    return 0;
}
