#include<iostream>
#include<vector>//引入vector头文件
#include<algorithm>
using namespace std;
int main() {

 vector<int> arr;//定义一个vector数组array
 int number,cnt;
 while (cin >> number) {

  arr.push_back(number);//每输入一个数字就把它添加到数组的最后
  if (cin.get() == '\n'){//如果是回车符则跳出循环
   sort(arr.begin(), arr.end());
   cout<<"Case "<<++cnt<<": ";
    for(vector<int>::iterator it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\b\n";
    arr.clear();}
 }
sort(arr.begin(), arr.end());
   cout<<"Case "<<++cnt<<": ";
    for(vector<int>::iterator it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\b\n";
    arr.clear();

}
