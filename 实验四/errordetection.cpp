#include<iostream>
using namespace std;

int geterri(int arr[101][101],int n){
    int i,j,sum=0;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++)sum+=arr[i][j];
        if(sum%2!=0)return i;
        sum=0;
    }
    return -1;
}
int geterrj(int arr[101][101],int n){
    int i,j,sum=0;
    for(j=1;j<=n;j++){
        for(int i=1;i<=n;i++)sum+=arr[i][j];
        if(sum%2!=0)return j;
        sum=0;
    }
    return -1;
}

bool checkarray(int arr[101][101],int n){
    int i,j,sum=0;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++)sum+=arr[i][j];
        if(sum%2!=0)return false;
        sum=0;
    }
    for(j=1;j<=n;j++){
        for(int i=1;i<=n;i++)sum+=arr[i][j];
        if(sum%2!=0)return false;
        sum=0;
    }
    return true;
}

int main(){
    int n;
    int code[101][101];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)cin>>code[i][j];
    if (checkarray(code,n)){
            cout<<"OK";
            return 0;
    }else{
        int p,q;
        p=geterri(code,n);
        q=geterrj(code,n);
        code[p][q]=!code[p][q];
        if (checkarray(code,n)){
            cout<<p<<" "<<q;
            return 0;
        }else{
            cout<<"Corrupt";
            return 0;
        }
    }

}
