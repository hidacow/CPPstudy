#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long n,k;
    cin>>n>>k;
    /*
    Explanation:
    The question equals to 'take k numbers from 1~n and satisfy that the gcd of these numbers is biggest'
    Apparently, the k numbers we take must be t*1,t*2,...,t*k;t is gcd of these numbers.
    Also, t*k<=n
    So max(t)=n/k
    */
    cout<<n/k;
}
