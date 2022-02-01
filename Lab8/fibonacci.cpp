#include<iostream>
using namespace std;
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    return(fib(n-2)+fib(n-1));
  }
}
int main(){
  int n;
  cout<<"Enter the required term:";
  cin>>n;
  cout<<"The term is:"<<fib(n-1)<<endl;
  return 0;
}
