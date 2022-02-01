#include<iostream>
using namespace std;
class Queue_Linked{
  private:
    struct node{
      int data;
      node* next;
    };
    node* front;
    node* rear;
  public:
    Queue_Linked(){
      front=rear=NULL;
    }
    void enqueue(int num){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      if(front==NULL){
        front=rear=ptr;
        front->next=rear->next=NULL;
      }
      else{
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
      }
    }
    void dequeue(){
      if(front==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* ptr;
      ptr=front;
      front=front->next;
      delete(ptr);
    }
    void display(){
      if(front==NULL){
        cout<<"Queue is empty."<<endl;
        return;
      }
      node* ptr;
      ptr=front;
      cout<<"Queue is:";
      while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
      }
      cout<<endl;
    }
};
int main(){
  Queue_Linked q;
  q.enqueue(7);
  q.display();
  q.enqueue(8);
  q.display();
  q.dequeue();
  q.display();
  return 0;
}

