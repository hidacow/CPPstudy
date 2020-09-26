#include <iostream>
using namespace std;
int fib[17]= {0,1,1};//define Fibonacci array
//need to allocate fib[17] in case of encountering error 0xC0000005
int main() {
    int a,n,m,x,i,k=0;
    while (cin>>a>>n>>m>>x){//This problem require multiple input, need to detect EOF


        if(x==1) {
            cout<<a;//if require 1st stop then print a
        }
        //make a Fibonacci array
        for(i=3;i<=17;i++){//Fibonacci rule start from item 3
            fib[i]=fib[i-1]+fib[i-2];//execute Fibonacci rule
        }
        if(n>4){
            k=(m-(fib[n-3]+1)*a)/(fib[n-2]-1);//find out fib(n-3)*a+fib(n-2)*k=m, solve k
        }
        cout<<(fib[x-2]+1)*a+(fib[x-1]-1)*k<<endl;
    }
}
