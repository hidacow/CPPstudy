#include<iostream>
using namespace std;
long cnt;

long counttimes(long n) {
    if (n<=0) {
        return -1;
    }
    else {
        while (n!=1) {
            if (n%2==0) {
                n/=2;
            }
            else{
                n=n*3+1;
            }
            cnt++;
        }
        return cnt;
    }
}

int main() {
    double n, no = 1;
    while(cin>>n) {
        cout<<counttimes(n)<<endl;
        cnt=0;
    }
}
