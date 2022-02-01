#include<iostream>
using namespace std;
int tail_fact(int,int);
int factorial(int n){
  return tail_fact(n,1);
}
int tail_fact(int n,int res){
  if(n==1){
    return res;
  }
  else{
    return(tail_fact(n-1,n*res));
  }
}
int main(){
  int n;
  cout<<"Enter the number:";
  cin>>n;
  cout<<"The factorial of entered no. is:"<<factorial(n)<<endl;
  return 0;
}
