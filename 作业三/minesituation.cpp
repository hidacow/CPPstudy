#include<iostream>
#include<cmath>
using namespace std;

int mine[10000];
int situation[10000];
int lines,column,cnt,currentindex;
int matrixcolumn;
bool flag=false;

void printsituation(){
    cout<<"Case "<<++cnt<<":"<<endl;
    int cprintindex=1;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=matrixcolumn;j++){
            if(j==1)cout<<situation[cprintindex++];
            else cout<<" "<<situation[cprintindex++];
            if(j==matrixcolumn)cout<<endl;
        }
    }
}

void endinputline(){
    flag=true;
    matrixcolumn=column;
    column=0;
    lines++;

}

int getnearbymines(int indexn){
    int minecnt=0;
    /*
                            ↖↑↗
    Detect nearby 9 squares ←·→
                            ↙↓↘
    */
    if((indexn-matrixcolumn)>=1)minecnt+=mine[indexn-matrixcolumn];//↑
    if((indexn+matrixcolumn)<=lines*matrixcolumn)minecnt+=mine[indexn+matrixcolumn];//↓
    if((indexn%matrixcolumn)!=1)minecnt+=mine[indexn-1];//←
    if((indexn%matrixcolumn)!=0)minecnt+=mine[indexn+1];//→
    if(((indexn-matrixcolumn)>=1)&&((indexn%matrixcolumn)!=1))minecnt+=mine[indexn-matrixcolumn-1];//↖
    if(((indexn-matrixcolumn)>=1)&&((indexn%matrixcolumn)!=0))minecnt+=mine[indexn-matrixcolumn+1];//↗
    if(((indexn+matrixcolumn)<=lines*matrixcolumn)&&((indexn%matrixcolumn)!=1))minecnt+=mine[indexn+matrixcolumn-1];//↙
    if(((indexn+matrixcolumn)<=lines*matrixcolumn)&&((indexn%matrixcolumn)!=0))minecnt+=mine[indexn+matrixcolumn+1];//↘
    return minecnt+mine[indexn];//·
}



void endsituation(){
    flag=false;
    for(int i=1;i<=lines*matrixcolumn;i++){situation[i]=getnearbymines(i);}
    printsituation();
    currentindex=0;
    lines=0;
    column=0;
    matrixcolumn=0;
}



void inputmine(int inputm){
    flag=false;
    column++;
    mine[++currentindex]=inputm;
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
            endsituation();
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
