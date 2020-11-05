#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

char a[10];

int main()
{
    int n;

    cin>>a;
    n=strlen(a);
    do{
        cout<<a<<endl;
    }while(next_permutation(a,a+n));
}
