#include<iostream>
#include<string>
using namespace std;

int getfishingdays(int n){
    switch(n%5){
        case 0:
            return n/5*3;
            break;
        case 1:
            return n/5*3+1;
            break;
        case 2:
            return n/5*3+2;
            break;
        case 3:
            return n/5*3+3;
            break;
        case 4:
            return n/5*3+3;
            break;
    }
}
int getrestdays(int n){
    switch(n%5){
        case 0:
            return n/5*2;
            break;
        case 1:
            return n/5*2;
            break;
        case 2:
            return n/5*2;
            break;
        case 3:
            return n/5*2;
            break;
        case 4:
            return n/5*2+1;
            break;
    }
}

int main() {
    int num;
    char ch;
    while (cin >> num) {

        ch = getchar();

        if (ch == '\n'||ch==EOF) {
            cout<<getfishingdays(num)-getrestdays(num)<<endl;
        }
    }
}
