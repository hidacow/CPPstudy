#include<iostream>
#include<string>
using namespace std;

//This problem includes multiple input
int main() {
    string str;
    char c;
    int valdigit,num;
    while(getline(cin,str)){    //get a whole line using getline()
        int digitno=0, sum=0;
        for (int i = 0; i < 11; i++) {//We only need to get the 0-10 digit of the string to calculate validation digit
            num = str[i]-48;    //convert the char to the actural number(if it is a number)
            if (str[i] != '-') { digitno++; sum += digitno * num; } //if the char is not '-' then count and sum it
        }
        valdigit = sum % 11;    //calculate the validation digit
        if (valdigit == 10)c = 'X'; //let the char be 'X'
        else c = valdigit+48;   //convert the number to char
        if (c == str[12]) { //compare the expected validation char with the input one
            cout << "Right"<<endl;
        }
        else {
            str[12] = c;    //use the right char to replace the wrong one
            cout << str << endl;  //print it out
        }
    }
}
