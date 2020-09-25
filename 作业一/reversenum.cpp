#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<(a%10)*100+(a/100)+(a%100-a%10);
}
