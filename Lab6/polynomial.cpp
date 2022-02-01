#include<iostream>
using namespace std;
class Polynomial{
  private:
  struct node{
    int coeff;
    int exp;
    node* next;
  };
  node* start;
  public:
  Polynomial(){
    start=NULL;
  }
  void insertatbeginning(int num,int pow){
    node* ptr;
    ptr=new node;
    ptr->coeff=num;
    ptr->exp=pow;
    ptr->next=NULL;
    start=ptr;
  } 
};
int main(){
  Polynomial l1,l2;
  int a;
  cout<<"Enter the highest order:";
  cin>>a;
  cout<<"Enter the value of first polynomial"<<endl;
  for(int i=0;i<=a;i++){
    int input;
    cout<<"Enter the value of "<<i<<" order:";
    cin>>input;
    l1.insertatbeginning(input,i);
  }
  cout<<"Enter the value of second polynomial"<<endl;
  for(int i=0;i<=a;i++){
    int input;
    cout<<"Enter the value of "<<i<<" order";
    cin>>input;
    l2.insertatbeginning(input,i);
  }
   
  return 0;
}
