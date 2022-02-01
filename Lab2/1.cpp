#include<iostream>
#define size 20
using namespace std;
class Stack{
private:
int arr[size];
int top;
public:
Stack(){
top=-1;
}
void push(int x){
if(top==(size-1)){
cout<<"Stack is full."<<endl;
exit(0);
}
cout<<"pushing item "<<x<<" onto the stack"<<endl;
arr[++top]=x;
}
void pop(){
  if(top==-1){
  cout<<"Stack is empty."<<endl;
exit(0);
  }
  cout<<"popping item "<<arr[top]<<" from the stack"<<endl;
  top--;
}
};
int main(){
  Stack s;
  s.push(5);
  s.push(6);
  s.push(7);
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  return 0;
}
