#include<iostream>
using namespace std;
int fib(int n,int a=0,int b=1){
  if(n==0){
  return a;
  }
  if(n==1){
    return b;
  }
  return(fib(n-1,b,a+b));
}
int main(){
  int n;
  cout<<"Enter the term:";
  cin>>n;
  cout<<"The req. term is:"<<fib(n)<<endl;
  return 0;
}
