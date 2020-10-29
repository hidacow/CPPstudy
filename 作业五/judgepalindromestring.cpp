#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int cnt;
    string str,rstr;
    int i = 1,n;
    while (getline(cin, str)) { //There's multiple input
        istringstream istr(str);
        istr >> cnt;    //get cnt from the stream
        n = cnt + i - 1;    //calculate the new upper limit
        for (; i <= n; i++) {
            getline(cin, str);
            cout<<"Case "<<i<<": "; //i should not be cleared in order to AC
            rstr="";    //clear reversedstring
            for(int j=1;j<=str.size();j++)  //reverse it
                rstr+=str[str.size()-j];
            if(str==rstr)cout<<"Yes";
            else cout<<"No";
            cout<<endl;
        }
    }
}
