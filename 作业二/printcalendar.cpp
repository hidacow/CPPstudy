#include<iostream>
#include<iomanip>
using namespace std;

long getyeardays(long y){//Get how may days are there in a year
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

long getmonthdays(long y,long m){//Get how may days are there in a month
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        return 31;
    else if(getyeardays(y)==366&&m==2)
        return 29;
    if(getyeardays(y)==365&&m==2)
        return 28;
    else
        return 30;
}


long getDays(long y, long m)    //date difference between y.m.1 and 1589.1.1
{
   int i;
   long sum=0;
   if(y>1589)   //1589.1.1 is Monday. You can also use years that satisfy yyyy.1.1 is monday
      for(i=1589;i<y;i++)   //only months after 1589.1 are supported
    	  sum+=getyeardays(i);
   if(m>1)
      for(i=1;i<m;i++)
    	  sum+=getmonthdays(y,i);

   return sum;
}

long printcalendar(long y,long m){
    long sum,day,daycount,i,j;
    sum=getDays(y,m);
    day=sum%7;  //use to calculate how many spaces need to add in the first line
    daycount=getmonthdays(y,m);
    for(i=0;i<day%7-1;i++)cout<<"    ";//print four spaces for the days of last month
    if(day%7!=0)cout<<"   ";    //print three spaces for the last day of last month to keep align
    for(i=1,j=day+1;i<=daycount;i++,j++){
        if(j%7!=1)cout<<" ";    //print space between two dates
        cout<<setw(3)<<setiosflags(ios::right)<<i; //print and right align date number
        if(j%7==0) cout<<endl;  //need to endl after the last day of one line
    }
        cout<<endl;

}


int main(){
    long year,month,no=1;
    while(cin>>year>>month){
        cout<<"Case "<<no++<<": "<<year<<"Äê"<<month<<"ÔÂ"<<endl;
        cout<<"Sun Mon Tue Wed Thu Fri Sat"<<endl;  //print the head of calendar
        printcalendar(year,month);
    }
}
