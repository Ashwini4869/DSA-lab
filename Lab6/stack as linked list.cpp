#include<iostream>
using namespace std;
class Linked_stack{
  private:
    struct node{
      int data;
      node* next;
    };
    node* top;
  public:
    Linked_stack(){
      top=NULL;
    }
    void push(int num){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      if(top==NULL){
        ptr->next=NULL;
        top=ptr;
      }
      else{
        ptr->next=top;
        top=ptr;
      }
    }
    void pop(){
      if(top==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* ptr;
      ptr=top;
      top=top->next;
      delete(ptr);
    }
    void display(){
      if(top==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* ptr;
      ptr=top;
      cout<<"\n Stack is:";
      do{
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
      }while((ptr)!=NULL);
      cout<<endl;
    }
};
int main(){
  Linked_stack s;
  s.push(5);
  s.display();
  s.push(6);
  s.display();
  s.pop();
  s.display();
  s.pop();
  s.display();
  return 0;
}
