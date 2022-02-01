#include<iostream>
#include<stack>
using namespace std;
bool operatorCheck(char ch){
  if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
    return true;
  }
  else{
    return false;
  }
}
int evaluate(string exp){
  int a,b;
  stack<int>s;
  for(int i=0;i<exp.length();i++){
    if(exp[i]>='0' && exp[i]<='9')
    {
      s.push(exp[i]-'0');
    }
    else if(operatorCheck(exp[i])){
      a=s.top();
      s.pop();
      b=s.top();
      s.pop();
      if(exp[i]=='+'){
        s.push(a+b);
        break;
      }
      else if(exp[i]=='-'){
        s.push(b-a);
        break;
      }
      else if(exp[i]=='*'){
        s.push(a*b);
        break;
      }
      else if(exp[i]=='/'){
        s.push(b/a);
        break;
      }
      else{
        break;
      }
    }
  }
  int result=s.top();
  s.pop();
  return result;
}
int main(){
string postfix;
cout<<"Enter the postfix expression:";
cin>>postfix;
cout<<"The value of the expression is:"<<evaluate(postfix)<<endl;
return 0;
}
