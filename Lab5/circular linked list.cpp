#include<iostream>
using namespace std;
template<class T>
class Circular_List{
  private:
    struct node{
      T data;
      node* next;
    };
    struct node* start;
    public:
    Circular_List(){
      start=NULL;
    }
    void create(T num){
      node* ptr;
      ptr=new node;
      ptr->data=num;
      start=ptr;
      ptr->next=start;
    }
    void AddAtBegin(T num){
      if(start==NULL){
        create(num);
      }
      else{
        node* newnode;
        newnode=new node;
        newnode->data=num;
        node* ptr;
        ptr=start;
        while((ptr->next)!=start){
          ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=start;
        start=newnode;
      }
    }
    void AddAtEnd(T num){
      if(start==NULL){
        create(num);
        return;
      }
      else{
      node* newnode;
      newnode=new node;
      newnode->data=num;
      node* ptr;
      ptr=start;
      while((ptr->next)!=start){
        ptr=ptr->next;
      }
      ptr->next=newnode;
      newnode->next=start;
    }
    }

    void AddAfter(T num,T ref){
      if(start==NULL){
        create(num);
        return;
      }
      else{
        node* newnode;
        newnode=new node;
        newnode->data=num;
        node* ptr;
        ptr=start;
        while((ptr->data)!=ref){
          ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
      }
    }
      void AddBefore(T num,T ref){
      if(start==NULL){
        create(num);
        return;
      }
      else{
      node* newnode;
      newnode=new node;
      newnode->data=num;
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
      newnode->next=preptr->next;
      preptr->next=newnode;
      }
      }
      void DeleteFromBegin(){
        node* ptr;
        ptr=start;
        while((ptr->next)!=start){
          ptr=ptr->next;
        }
        ptr->next=start->next;
        delete(start);
        start=ptr->next;
      }
      
      void DeleteFromEnd(){
        node* ptr;
        node* preptr;
        ptr=start;
        while((ptr->next)!=start){
          preptr=ptr;
          ptr=ptr->next;
        }
        preptr->next=start;
        delete(ptr);
      }

      void DeleteAfter(T ref){
        node* ptr;
        node* nextptr;
        ptr=start;
        while((ptr->data)!=ref){
          ptr=ptr->next;
        }
        nextptr=ptr->next;
        ptr->next=nextptr->next;
        delete(nextptr);
      }

      void display(){
        node* ptr;
        if(start==NULL){
          cout<<"\n\n List is empty."<<endl;
          return;
        }
        ptr=start;
        cout<<"\n\n List is :";
        do{
          cout<<ptr->data<<"\t";
          ptr=ptr->next;
        }
        while(ptr!=start);
        cout<<endl;
      }
};
int main(){
  Circular_List<int> l;
  int choice,input,ref;
  cout<<"CIRCULAR LINKED LIST"<<endl;
  while(true){
  cout<<"\n\n1.Create List"<<"\t"<<"2.Add at Beginning"<<"\n"<<"3.Add at End"<<"\t"<<"4.Add After "<<"\n"<<"5.Add Before"<<"\t"
    <<"6.Delete from Beginning"<<"\n"<<"7.Delete from End"<<"\t"<<"8.Delete After"<<"\n"<<"9.Exit"<<endl;
  cin>>choice;
  switch(choice){
  case 1:
    cout<<"Enter the value for the first node:";
    cin>>input;
    l.create(input);
    l.display();
    break;
  case 2:
    cout<<"Enter the value to insert at the beginning:";
    cin>>input;
    l.AddAtBegin(input);
    l.display();
    break;
  case 3:
    cout<<"Enter the value to insert at the end:";
    cin>>input;
    l.AddAtEnd(input);
    l.display();
    break;
  case 4:
    cout<<"Enter the value to be inserted:";
    cin>>input;
    cout<<"Enter the reference element:";
    cin>>ref;
    l.AddAfter(input,ref);
    l.display();
    break;
  case 5:
    cout<<"Enter the value to be inserted:";
    cin>>input;
    cout<<"Enter the reference element:";
    cin>>ref;
    l.AddBefore(input,ref);
    l.display();
    break;
  case 6:
    l.DeleteFromBegin();
    l.display();
    break;
  case 7:
    l.DeleteFromEnd();
    l.display();
    break;
  case 8:
    cout<<"Enter the reference element:";
    cin>>ref;
    l.DeleteAfter(ref);
    l.display();
    break;
  case 9:
    cout<<"You have successfully exited"<<endl;
    exit(1);
  default:
    break;
  }
  }
  return 0;
}
