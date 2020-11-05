#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    unsigned long decnum;
    cin>>decnum;
    cout<<oct<<decnum<<"(Oct), "<<dec<<decnum<<"(Dec), "<<setiosflags(ios::uppercase)<<hex<<decnum<<"(Hex)";

}
