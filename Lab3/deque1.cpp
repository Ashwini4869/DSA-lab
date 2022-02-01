#include<iostream>
#define size 20
using namespace std;
class Deque{
  private:
    int arr[size];
    int front;
    int rear;
  public:
    Deque(){
      front=-1;
      rear=0;
    }
    bool isEmpty(){
      return(((front+1)==rear)||((front==(size-1))&&(rear==0)));
    }
    bool isFull(){
      return(front==rear);
    }
    void enqueueRear(int x){
      if(isFull()){
        cout<<"Overflow!"<<endl;
        exit(0);
      }
      rear%=size;
      arr[rear++]=x;
      cout<<"Added "<<x<<" at the rear"<<endl;
    }
    void dequeueRear(){
      if(isEmpty()){
        cout<<"Underflow!"<<endl;
        exit(0);
      }
      if(rear<0){
        rear=(size-1); 
      }
      else{
      rear--;
      }
      cout<<"Removed "<<arr[rear]<<" from the rear"<<endl;
    }
    void enqueueFront(int x){
      if(isFull()){
        cout<<"Overflow!"<<endl;
        exit(0);
      }
      if(front<0){
        front=(size-1);
      }
      else{
        front--;
      }
      arr[front]=x;
      cout<<"Added "<<x<<" to the front"<<endl;
    }
    void dequeueFront(){
      if(isEmpty()){
        cout<<"Underflow!"<<endl;
        exit(0);
      }
      front%=size;
      cout<<"Removed "<<arr[front++]<<" from the front"<<endl;
    }
};
int main(){
 Deque q;
 q.enqueueFront(5);
 q.enqueueFront(7);
 q.enqueueRear(9);
 q.enqueueRear(3);
 q.dequeueFront();
 q.dequeueFront();
 q.dequeueRear();
 q.dequeueRear();
 return 0;
}
