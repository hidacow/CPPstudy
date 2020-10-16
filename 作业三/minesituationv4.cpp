#include<iostream>
#include<vector>
using namespace std;

int situation[103][103];
int lines = 1, column, cnt;
int matrixcolumn;
bool flag = false;



void printsituation() {
    cout << "Case " << ++cnt << ":" << endl;
    for (int i = 1; i <= lines - 1; i++) {
        for (int j = 1; j < matrixcolumn; j++) {
            cout << situation[i][j] << " ";
        }
        cout<<situation[i][matrixcolumn]<<endl;//if use /b/n cannot AC
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
    for (int i = 0; i <= 102; i++) {
        for (int j = 0; j <= 102; j++) {
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
    while (1) {
        inputc = getchar();
        if (inputc == ' ')continue;
        switch (inputc) {
        case '\n':
            if (!flag)endinputline();
            else endsituation();
            break;
        case EOF:
            printsituation();
            return 0;
            break;
        case '0':
            inputmine(0);
            break;
        case '1':
            inputmine(1);
            break;
        }
    }
}

