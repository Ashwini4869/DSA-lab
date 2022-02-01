//given that d1=date of birth and d2=today's date
#include<iostream>
using namespace std;
template<class T>
class Date{
  private:
  T day;
  T month;
  T year;
  public:
  Date(){}
  Date(T y,T m,T d){
  year=y;
  month=m;
  day=d;
  }
  Date calculateAge(Date d1,Date d2){
  Date d3;
  if(d2.day<d1.day){
    d3.day=(d2.day+30)-d1.day;
    d2.month--;
  }
  else{
    d3.day=d2.day-d1.day;
  }
  if(d2.month<d1.month){
    d3.month=(d2.month+12)-d1.month;
    d2.year--;
  }
  else{
    d3.month=d2.month-d1.month;
  }
  d3.year=d2.year-d1.year;
  return d3; 
  }
  void print(){
    cout<<"Your age is: "<<year<<" years, "<<month<<" months, and "<<day<<" days"<<endl;
  }
};
int main(){
  Date<int>d1(2000,1,15),d2(2021,12,8);
  Date<int>d3;
  d3=d3.calculateAge(d1,d2);
  d3.print();
return 0;
}
