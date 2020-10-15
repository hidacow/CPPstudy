#include <iostream>
using namespace std;
int fib[35]= {0,1,1};//define Fibonacci array
int main() {
    int n;
    for(int i=3;i<=34;i++){//Fibonacci rule start from item 3
            fib[i]=fib[i-1]+fib[i-2];//execute Fibonacci rule
    }
    while (cin>>n){//This problem require multiple input, need to detect EOF
        //find the rule
        cout<<fib[n+1]<<endl;
    }
}
