#include<iostream>
using namespace std;
char c[101][101];
int main()
    {
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>c[i][j];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int sum=0;
            if(c[i][j]=='*') cout<<'*';//if is mine print * right away
            else{
                if(c[i-1][j+1]=='*') sum++;
                if(c[i][j+1]=='*') sum++;
                if(c[i+1][j+1]=='*') sum++;
                if(c[i-1][j]=='*') sum++;
                if(c[i+1][j]=='*') sum++;
                if(c[i-1][j-1]=='*') sum++;
                if(c[i][j-1]=='*') sum++;
                if(c[i+1][j-1]=='*') sum++;
                cout<<sum;//after judge print mine sum
            }
        }
        cout<<endl;//start next line
    }
    return 0;
}
