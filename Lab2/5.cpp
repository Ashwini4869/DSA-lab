#include<iostream>
#include<stack>
using namespace std;
bool match(string exp){
  stack<char>s;
  for(int i=0;i<exp.length();i++){
    { 
    if(exp[i]=='(')
      s.push(exp[i]);
    }
  if(exp[i]==')')
  {
    if(s.empty()){
      return false;
    }
    if(!s.empty()){
      s.pop();
    }
  } 
  }
  if(s.empty()){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  string exp;
  cout<<"Enter the expression:";
  cin>>exp;
  if(match(exp)==true){
    cout<<"Parenthesis match."<<endl;
  }
  else{
    cout<<"Parenthesis donot match."<<endl;
  }
  return 0;
}
