#include<iostream>
using namespace std;
template<class T>
void swap(T *ap,T *bp){
 T temp;
 temp=*ap;
 *ap=*bp;
 *bp=temp;
}
int main(){
cout<<"For integer values:"<<endl;
int p=4,q=5;
cout<<"Before swap,p="<<p<<",q="<<q<<endl;
swap(&p,&q);
cout<<"After swap,p="<<p<<",q="<<q<<endl;
cout<<"For float values:"<<endl;
float fp=66.7,fq=44.4;
cout<<"Before swap,fp="<<fp<<",fq="<<fq<<endl;
swap(&fp,&fq);
cout<<"After swap,fp="<<fp<<",fq="<<fq<<endl;
cout<<"For character values:"<<endl;
char cp='a',cq='b';
cout<<"Before swap,cp="<<cp<<",cq="<<cq<<endl;
swap(&cp,&cq);
cout<<"After swap,cp="<<cp<<",cq="<<cq<<endl;
return 0;
}
