#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long victim,dead;
    double dr;
    cin>>victim>>dead;
    if(victim==0){
        cout<<"0.000%"; //�����ǿ�
    }else{
        dr=(double)dead/victim;
        cout<<fixed<<setprecision(3)<<dr*100<<"%";
    }

}
