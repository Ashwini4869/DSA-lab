#include<iostream>
using namespace std;
struct DATE{
int day;
int month;
int year;
};
void calculate(DATE *dp1,DATE *dp2){
DATE d3;
if(dp2->day>dp1->day){
  d3.day=dp2->day-dp1->day;
}
else{
  d3.day=(dp2->day+30)-dp1->day;
  dp2->month-=1;
}
if(dp2->month>dp1->month){
d3.month=dp2->month-dp1->month;
}
else{
  d3.month=(dp2->month+12)-dp1->month;
  dp2->year-=1;
}
d3.year=dp2->year-dp1->year;
cout<<"The age is: "<<d3.year<<" years,"<<d3.month<<" months,"<<d3.day<<" days."<<endl;
}

int main(){
struct DATE d1,d2;
cout<<"Enter the value of year,month and day of birth date:";
cin>>d1.year>>d1.month>>d1.day;
cout<<"Enter the value of year,month and day of today's date:";
cin>>d2.year>>d2.month>>d2.day;
calculate(&d1,&d2);
return 0;
}

