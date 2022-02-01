#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool operatorCheck(char c)
{
if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^' )
{
  return true;
}
return false;
}
int precedence(char c){
  if(c=='^'){
  return 3;
  }
  else if(c=='*' || c=='/')
  {
    return 2;
  }
  else if(c=='+' || c=='-'){
  return 1;
  }
  else{
    return -1;
  }
}
string toPostfix(string infix){
stack<char>s;
string postfix;
for(int i=0;i<(infix.length());i++){
  if(((infix[i]>='a') && (infix[i]<='z')) || ((infix[i]>='A') && (infix[i]<='Z'))){
    postfix+=infix[i];
  }
  else if(infix[i]=='('){
    s.push(infix[i]);
  }
  else if(infix[i]==')'){
    while((s.top()!='(') && (!s.empty())){
      postfix+=s.top();
      s.pop();
    }
    if(s.top()=='('){
      s.pop();
    }
  }
  else if(operatorCheck(infix[i])){
    if(s.empty()){
      s.push(infix[i]);
    }
    else if(precedence(infix[i])>precedence(s.top())){
      s.push(infix[i]);
    }
    else if(precedence(infix[i])==precedence(s.top()) && infix[i]=='^'){
      s.push(infix[i]);
    }
  }
  else{
    while(!s.empty() && (precedence(infix[i])<=precedence(s.top())))
    {
      s.pop();
      s.push(infix[i]);
    }
  }
}
while(!s.empty()){
  postfix+=s.top();
  s.pop();
}
return postfix;
}
int main()
{
string infix;
cout<<"Enter the infix expression:";
cin>>infix;
cout<<"The evaluated postfix expression is:"<<toPostfix(infix)<<endl;
return 0;
}
