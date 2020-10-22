#include<iostream>
#include<string>
using namespace std;

//This problem includes multiple input
int main() {
    string str;
    char c;
    int valdigit,num;
    while(getline(cin,str)){
        int digitno=0, sum=0;
        for (int i = 0; i < 11; i++) {
            num = str[i]-48;
            if (str[i] != '-') { digitno++; sum += digitno * num; }
        }
        valdigit = sum % 11;
        if (valdigit == 10)c = 'X';
        else c = valdigit+48;
        if (c == str[12]) {
            cout << "Right"<<endl;
        }
        else {
            str[12] = c;
            cout << str<<endl;
        }
    }
}
