#include<iostream>
using namespace std;
void move(int d,char src,char dest,char aux){
  if(d==1){
    cout<<"Move from "<<src<<" to "<<dest<<"\n";
  }
  else{
    move(d-1,src,aux,dest);
    move(1,src,dest,aux);
    move(d-1,aux,dest,src);
  }
}
int main(){
  move(3,'A','B','C');
  return 0;
}
