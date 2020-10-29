#include<iostream>
#include<string>
#include<sstream>
using namespace std;



int main() {
    int cnt;
    string str;
    int i = 1,n;
    while (getline(cin, str)) { //There's multiple input
        istringstream istr(str);
        istr >> cnt;    //get cnt from the stream
        n = cnt + i - 1;    //calculate the new upper limit
        for (; i <= n; i++) {
            getline(cin, str);
            cout<<"Case "<<i<<": \""<<str;  //i should not be cleared in order to AC
            if(str.size()%2==0) //handle the first situation
                for(int j=str.size()-1;j>=0;j--)
                    cout<<str[j];
            else    //handle another situation
                for(int j=str.size()-2;j>=0;j--)
                    cout<<str[j];
            cout<<"\""<<endl;
        }
    }
}
