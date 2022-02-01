#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverse(string infix){
string revinfix;
for(int i=0;i<infix.length();i++){
  revinfix+=infix[infix.length()-(i+1)];
}
return revinfix;
}
bool operatorCheck(char ch){
  if(ch=='+' || ch=='-' || ch=='*' || ch=='/' | ch=='^'){
    return true;
  }
  else{
  return false;}
}
int precedence(char ch){
  if(ch=='^'){
    return 3;
  }
  else if(ch=='*' || ch=='/'){
  return 2;
  }
  else if(ch=='+' || ch=='-'){
    return 1;
  }
  else{
    return -1;
  }
}
string toPrefix(string infix){
  string prefix;
  stack<char>s;
  infix=reverse(infix);
  for(int i=0;i<infix.length();i++){
    if(infix[i]=='(')
    {
      infix[i]=')';
    }
    else if(infix[i]==')'){
      infix[i]='(';
    }
  }
  for(int i=0;i<infix.length();i++){
    if((((infix[i]>='a') && (infix[i]<='z'))) || ((infix[i]>='A') && (infix[i]<='Z'))){
      prefix+=infix[i];
    }
    else if(infix[i]=='(')
    {
      s.push(infix[i]);
    }
    else if(infix[i]==')'){
      while((s.top()!='(')&&(!s.empty())){
        prefix+=s.top();
        s.pop();
      }
      if(s.top()=='('){
        s.pop();
      }
    }
    else if(operatorCheck(infix[i])){
      if(s.empty())
      {
        s.push(infix[i]);
      }
      else if(precedence(infix[i])>precedence(s.top())){
        s.push(infix[i]);
      }
      else if((precedence(infix[i])==precedence(s.top())) && infix[i]=='^'){
        while(((precedence(infix[i]))==precedence(s.top()))&&(infix[i]=='^'))
        {
          prefix+=s.top();
          s.pop();
        }
        s.push(infix[i]);
      }
    }
    else{
      while((!s.empty()) && precedence(infix[i])<precedence(s.top())){
        prefix+=s.top();
        s.pop();
      }
    }
  }
  while(!s.empty()){
    prefix+=s.top();
    s.pop();
  }
  return reverse(prefix);
}
int main(){
  string infix;
  cout<<"Enter the infix expression:";
  cin>>infix;
  cout<<"The prefix expression is:"<<toPrefix(infix)<<endl;
return 0;
}
