
#include <iostream>
#include<iomanip>
using namespace std;
#define N 100

int a[N][N], b[N][N];

int main(void)
{
    int m, n, i, j;

    cin >> m >> n;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> b[i][j];

    int count = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == b[i][j])
                count++;
    float ans;
    ans = (float)100 * count / (m * n);
    cout << fixed<<setprecision(2)<< ans << endl;

    return 0;
}
