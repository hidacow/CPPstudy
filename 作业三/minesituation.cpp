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
                            ¨I¡ü¨J
    Detect nearby 9 squares ¡û¡¤¡ú
                            ¨L¡ý¨K
    */
    if((indexn-matrixcolumn)>=1)minecnt+=mine[indexn-matrixcolumn];//¡ü
    if((indexn+matrixcolumn)<=lines*matrixcolumn)minecnt+=mine[indexn+matrixcolumn];//¡ý
    if((indexn%matrixcolumn)!=1)minecnt+=mine[indexn-1];//¡û
    if((indexn%matrixcolumn)!=0)minecnt+=mine[indexn+1];//¡ú
    if(((indexn-matrixcolumn)>=1)&&((indexn%matrixcolumn)!=1))minecnt+=mine[indexn-matrixcolumn-1];//¨I
    if(((indexn-matrixcolumn)>=1)&&((indexn%matrixcolumn)!=0))minecnt+=mine[indexn-matrixcolumn+1];//¨J
    if(((indexn+matrixcolumn)<=lines*matrixcolumn)&&((indexn%matrixcolumn)!=1))minecnt+=mine[indexn+matrixcolumn-1];//¨L
    if(((indexn+matrixcolumn)<=lines*matrixcolumn)&&((indexn%matrixcolumn)!=0))minecnt+=mine[indexn+matrixcolumn+1];//¨K
    return minecnt+mine[indexn];//¡¤
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
