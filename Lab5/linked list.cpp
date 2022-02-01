#include<iostream>
using namespace std;
class Linked_List{
  private:
    struct node{
      int data;
      node* next;
    };
    struct node* start;
  public:
    Linked_List(){
      start=NULL;
    }
    void create(int data){
      node* ptr;
      ptr =new node;
      ptr->data=data;
      ptr->next=NULL;
      start=ptr;
    }
    void display(){
      node* ptr;
      if(start==NULL){
        cout<<"\n\n List is empty."<<endl;
        return;
      }
      ptr=start;
      cout<<"\n\n List is:";
      while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
      }
      cout<<endl;
    }
    void AddAtBegin(int num){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      if(start==NULL){
        ptr->next=NULL; 
      }
      else{
        ptr->next=start;
      }
      start=ptr;
    }
    void AddAtEnd(int num){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      ptr->next=NULL;
      if(start==NULL){
        start=ptr;
      }
      else{
        node* temp;
        temp=start;
        while((temp->next)!=NULL){
          temp=temp->next;
        }
        temp->next=ptr;
      }
    }
    void AddAfter(int num,int ref){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      if(start==NULL){
        start=ptr;
        ptr->next=NULL;
      }
      else{
        node* temp;
        temp=start;
        while((temp->data)!=ref){
          temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
      }
    }
    void AddBefore(int num,int ref){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      if(start==NULL){
        start=ptr;
      }
      else{
        node* temp;
        temp=start;
        while((temp->data)!=ref){
        temp=temp->next;
        }
        node* preptr;
        preptr=start;
        while((preptr->next)!=temp){
          preptr=preptr->next;
        }
        ptr->next=preptr->next;
        preptr->next=ptr;
      }
    }
    void DeleteFromBegin(){
      if(start==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* ptr;
      ptr=start;
      start=ptr->next;
      delete ptr;
    }
    void DeleteFromEnd(){
      if(start==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* ptr;
      ptr=start;
      while((ptr->next)!=NULL){
        ptr=ptr->next;
      }
      node* preptr;
      preptr=start;
      while((preptr->next)!=ptr){
        preptr=preptr->next;
      }
      preptr->next=NULL;
      delete ptr;
    }
    void DeleteAfter(int ref){
      if(start==NULL){
        cout<<"UNDERFLOW"<<endl;
        return;
      }
      node* preptr;
      preptr=start;
      while((preptr->data)!=ref){
        preptr=preptr->next; 
      }
      node* ptr;
      ptr=preptr->next;
      preptr->next=ptr->next;
      delete ptr;
    }
};
int main() {
  Linked_List l;
  l.create(5);
  l.AddAtBegin(6);
  l.AddAtBegin(7);
  l.AddAtEnd(9);
  l.AddAtEnd(10);
  l.AddAfter(8,5);
  l.AddBefore(7,8);
  l.display();
  l.DeleteFromBegin();
  l.display();
  l.DeleteFromEnd();
  l.display();
  l.DeleteAfter(5);
  l.display();
	return 0;
}
