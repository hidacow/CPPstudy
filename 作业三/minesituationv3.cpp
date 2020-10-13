#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> situation(101, vector<int>(101));
int lines = 1, column, cnt;
int matrixcolumn;
bool flag = false;



void printsituation() {
    cout << "Case " << ++cnt << ":" << endl;
    for (int i = 1; i <= lines - 1; i++) {
        for (int j = 1; j <= matrixcolumn; j++) {
            cout << situation[i][j] << " ";
            if (j == matrixcolumn)cout << "\b\n";
        }
    }
}





void endinputline() {
    flag = true;
    matrixcolumn = column;
    column = 0;
    lines++;

}



void endsituation() {
    flag = false;

    printsituation();
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            situation[i][j]=0;
        }
    }
    lines = 1;
    column = 0;
    matrixcolumn = 0;
}



void inputmine(int inputm) {
    flag = false;
    ++column;
    if (inputm==0)return;
    situation[lines][column]++;//本身
    situation[lines-1][column]++;//上
    situation[lines+1][column]++;//下
    situation[lines][column-1]++;//左
    situation[lines][column+1]++;//右
    situation[lines-1][column-1]++;//左上
    situation[lines+1][column-1]++;//左下
    situation[lines-1][column+1]++;//右上
    situation[lines+1][column+1]++;//右下

}




int main() {
    char inputc;
    int i, j;
    while (inputc = cin.get()) {
        if(inputc==' ')continue;
        switch (inputc) {
        case '\n':
            if (!flag)endinputline();
            else endsituation();
            break;
        case '0':
            inputmine(0);
            break;
        case '1':
            inputmine(1);
            break;
        default:
            flag = false;
            break;
        }
    }
}
