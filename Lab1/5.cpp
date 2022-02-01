#include<iostream>
#include<cstring>
#define  MAX_SIZE 40
int operate(char op,int left,int right){
if(op=='+'){
return left+right;
}
if(op=='-')
{
return left-right;
}
if(op=='*')
{
  return left*right;
}
if(op=='/')
{
  return left/right;
}
return 0;
}

using namespace std;
int main(){
  //variable declarations
  char input[MAX_SIZE];
  char left[MAX_SIZE];
  char right[MAX_SIZE];
  char op;
  int leftint,rightint, i=0;
  int x=0;
  int length;
  int answer;
  //taking input expression
  cout<<"Enter the expression:";
  cin>>input;
  //length of the input
  length=strlen(input);
  cout<<"Length of the string:"<<length<<endl;
  while(1){
    if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/')
    {op=input[i];
    break;
  }
    else{
      left[i]=input[i]; 
    }
    x++;
  }
  for(i=x;i<length;i++){
    int y=0;
  right[y]=input[i];
  y++;
  }
sscanf(left,"%d",&leftint);
cout<<leftint<<endl;
sscanf(right,"%d",&rightint);
cout<<rightint<<endl;
answer=operate(op,leftint ,rightint);
cout<<"The evaluated expression is:"<<answer<<endl;
return 0;
}

