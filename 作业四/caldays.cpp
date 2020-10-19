#include<iostream>
#include<iomanip>
using namespace std;


void formatnum(int num){
    if(num<10)cout<<"0"<<num;
    else cout<<num;
}

int getyeardays(int y){//Get how may days are there in a year
    if(y%100==0){
        if(y%400==0)
            return 366;
        else
            return 365;
        }else{
            if(y%4==0)
                return 366;
            else
                return 365;
        }
}

int getmonthdays(int y,int m){//Get how may days are there in a month
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        return 31;
    else if(getyeardays(y)==366&&m==2)
        return 29;
    if(getyeardays(y)==365&&m==2)
        return 28;
    else
        return 30;
}


int getDays(int y,int m, int d)
{
   int md;
   int sum=0;
   for(int i=1;i<m;i++)sum=sum+getmonthdays(y,i);


   return sum+d;
}




int main(){
    int year,month,day,cnt=0;
    while(cin>>year>>month>>day){
        cout<<"Case "<<++cnt<<": ";
        formatnum(month);
        cout<<"/";
        formatnum(day);
        cout<<"/"<<year<<", "<<getDays(year,month,day)<<endl;

    }
}
