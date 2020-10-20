#include<iostream>
#include<string>
#include<sstream>
using namespace std;

double sum;
int lines = 0, column, cnt;
int matrixcolumn;
int flag=0;

void endsituation() {
    flag = 0;
    cout << "Case " << ++cnt << ": " << lines<<", "<<matrixcolumn<<", "<<sum<<endl;
    lines = 0;
    column = 0;
    matrixcolumn = 0;
    sum=0;
}

void endinputline() {
    matrixcolumn = column;
    column = 0;
    lines++;

}

int main(){
    string str;
    float num;
    while(getline(cin,str)){    //get the whole line and put it into a string
        if(str.length()==0){endsituation();continue;}   //if entered nothing then end the situation
        istringstream inputstr(str);
        while(inputstr>>num){
            sum+=num;
            column++;
        }
        endinputline();
    }
    endsituation(); //handle EOF, need to end the situation

}
