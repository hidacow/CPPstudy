#include<iostream>
#include<string>
using namespace std;



int main() {
    int num;
    char ch;
    while (cin >> num) {

        ch = getchar();

        if (ch == '\n'||ch==EOF) {
            string numstr;
            numstr=to_string(num);
            string::size_type idx;
            idx=numstr.find("7");
            if(num%7==0||idx!= string::npos)cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
    }
}
