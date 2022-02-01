#include<iostream>
using namespace std;
template<class T>
class Linked_List{
  private:
    struct node{
      T data;
      node* next;
    };
    struct node* start;
  public:
    Linked_List(){
      start=NULL;
    }
    void create(T data){
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
    void AddAtBegin(T num){
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
    void AddAtEnd(T num){
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
    void AddAfter(T num,T ref){
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
    void AddBefore(T num,T ref){
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
    void DeleteAfter(T ref){
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
  Linked_List<int>l;
  //menu-driven program
  int choice,input,ref;
  cout<<"LINKED LIST"<<endl;
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
    exit(1);
  default:
    break;
  }
  }
	return 0;
}
