#include<iostream>
using namespace std;
class Doubly_Linked_List{
  private:
    struct node{
      node* prev;
      int info;
      node* next;
    };
    node* start;
  public:
    Doubly_Linked_List(){
      start=NULL;
    }
    void create(int data){
      node* ptr;
      ptr=new node;
      ptr->info=data;
      ptr->prev=NULL;
      ptr->next=NULL;
      start=ptr;
    }
    void insertBegin(int data){
      node* ptr;
      ptr=new node;
      ptr->info=data;
      ptr->prev=NULL;
      ptr->next=start;
      start=ptr;
    }
    
    void insertEnd(int data){
      node* ptr;
      ptr=new node;
      ptr->info=data;
      ptr->next=NULL;
      node* pointer;
      pointer=start;
      while((pointer->next)!=NULL){
        pointer=pointer->next;
      }
      pointer->next=ptr;
      ptr->prev=pointer;
    }

    void insertAfter(int data,int ref){
      node* newnode;
      newnode=new node;
      newnode->info=data;
      node* ptr;
      ptr=start;
      while((ptr->info)!=ref){
        ptr=ptr->next;
      }
      newnode->next=ptr->next;
      newnode->prev=ptr;
      ptr->next->prev=newnode;
      ptr->next=newnode;
    }

    void insertBefore(int data,int ref){
      node* newNode;
      newNode=new node;
      newNode->info=data;
      node* ptr;
      ptr=start;
      while((ptr->info)!=ref){
        ptr=ptr->next; 
      }
      newNode->next=ptr;
      newNode->prev=ptr->prev;
      ptr->prev->next=newNode;
      ptr->prev=newNode;
    }
    
    void deleteBegin(){
      if(start==NULL){
        cout<<"UNDERFLOW!";
        return;
      }
      node* ptr;
      ptr=start;
      start=start->next;
      start->prev=NULL;
      delete(ptr);
    }
    
    void deleteEnd(){
      if(start==NULL){
        cout<<"UNDERFLOW!";
        return;
      }
      node* ptr;
      ptr=start;
      while((ptr->next)!=NULL){
        ptr=ptr->next;
      }
      ptr->prev->next=NULL;
      delete(ptr);
    }

    void deleteAfter(int ref){
      if(start==NULL){
        cout<<"UNDERFLOW!";
        return;
      }
      node* ptr;
      ptr=start;
      while((ptr->info)!=ref){
        ptr=ptr->next;
      }
      node* temp;
      temp=ptr->next;
      ptr->next=temp->next;
      temp->next->prev=ptr;
      delete(temp);
    }

    void deleteBefore(int ref){
      if(start==NULL){
        cout<<"UNDERFLOW!";
        return;
      }
      node* ptr;
      ptr=start;
      while((ptr->info)!=ref){
        ptr=ptr->next;
      }
      node* temp;
      temp=ptr->prev;
      temp->prev->next=ptr;
      ptr->prev=temp->prev;
      delete(temp);
    }
    
    void display(){
      node* ptr;
      if(start==NULL){
        cout<<"\n List is empty.";
        return;
      }
      ptr=start;
      cout<<"\n\n List is:";
      while(ptr!=NULL){
        cout<<ptr->info<<"\t";
        ptr=ptr->next;
      }
      cout<<"\n";
    }
};
int main(){
  Doubly_Linked_List d;
  d.create(5);
  d.display();
  d.insertBegin(6);
  d.display();
  d.insertEnd(7);
  d.display();
  d.deleteBegin();
  d.display();
  return 0;
}
