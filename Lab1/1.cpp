#include <iostream>
using namespace std;
int strLength(char *p){
  int count=0;
  while(*p!='\0'){
    count++;
    p++;
  }
  return count;
}
void concatenate(){
char str1[50],str2[50];
char *s1=str1;
char *s2=str2;
cout<<"Enter string 1:";
fgets(str1,50,stdin);
cout<<"Enter string 2:";
fgets(str2,50,stdin);
while(*s1!='\0'){
  s1++;
}
while(*s2!='\0'){
*s1=*s2;
s1++;
s2++;
}
*s1='\0';
cout<<"The concatenated string is:"<<str1<<endl;
}

int main()
{
  char str[20];
  int length;
  cout<<"Enter any string:"<<endl;
  fgets(str,20,stdin);
  length=strLength(str); 
  cout<<"The length of the given string is:"<<length<<endl;
  concatenate();
	return 0;
}

