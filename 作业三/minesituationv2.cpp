#include<iostream>
#include<vector>
using namespace std;

vector<vector<bool>> mine(102, vector<bool>(102));
vector<vector<int>> situation(102, vector<int>(102));
int lines=1,column,cnt;
int matrixcolumn;
bool flag=false;


void printsituation(){
    cout<<"Case "<<++cnt<<":"<<endl;
    for(int i=1;i<=lines-1;i++){
        for(int j=1;j<=matrixcolumn;j++){
            cout<<situation[i][j]<<" ";
            if(j==matrixcolumn)cout<<"\b\n";
        }
    }
}





void endinputline(){
    flag=true;
    matrixcolumn=column;
    column=0;
    lines++;

}

int getnearbymines(int indexl,int indexc){
    int minecnt=0;
    if(indexl>1)minecnt+=mine[indexl-1][indexc];//上
    if(indexl<lines)minecnt+=mine[indexl+1][indexc];//下
    if(indexc>1)minecnt+=mine[indexl][indexc-1];//左
    if(indexc<matrixcolumn)minecnt+=mine[indexl][indexc+1];//右
    if(indexl>1&&indexc>1)minecnt+=mine[indexl-1][indexc-1];//左上
    if(indexl<lines&&indexc>1)minecnt+=mine[indexl+1][indexc-1];//左下
    if(indexl>1&&indexc<matrixcolumn)minecnt+=mine[indexl-1][indexc+1];//右上
    if(indexl<lines&&indexc<matrixcolumn)minecnt+=mine[indexl+1][indexc+1];//右下
    return minecnt+=mine[indexl][indexc];
}



void endsituation(){
    flag=false;
    for(int i=1;i<=lines-1;i++){
        for(int j=1;j<=matrixcolumn;j++){
            situation[i][j]=getnearbymines(i,j);
        }
    }
    printsituation();
    lines=1;
    column=0;
    matrixcolumn=0;
}



void inputmine(int inputm){
    flag=false;
    ++column;
    mine[lines][column]=inputm;
}




int main(){
    char inputc;
    int i,j;
    while(inputc=cin.get()){
        switch(inputc){
            case '\n':
                if(!flag)endinputline();
                else endsituation();
                break;
            case '0':
                inputmine(0);
                break;
            case '1':
                inputmine(1);
                break;
            default:
                flag=false;
                break;
        }
    }
}
