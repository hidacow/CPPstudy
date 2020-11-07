#include <iostream>
#include<string>
using namespace std;

//This cannot AC, more research required

string Trans(string str, int n)
{
    for(int i=0;i<=str.size();i++)
        str[i] = (char)(str[i] + n);
    return str;
}

int main()
{
    string str;
    int n;
    while (cin >> n)
    {
        getchar();
        getline(cin, str);
        cout << Trans(str, n) << endl;
    }
    return 0;
}
