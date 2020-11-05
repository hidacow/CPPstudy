#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double s, v1, v2, v3, result;
    cin >> s >> v1 >> v2 >> v3;
    result = s / (v1 + v2) * v3;
    printf("%0.2f",result);
    return 0;
}
