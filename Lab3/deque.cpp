#include<iostream>
#define size 20
using namespace std;
class Deque{
  private:
    int arr[size];
    int rear;
    int front;
  public:
    Deque(){
      front=-1;
      rear=0;
    }
    bool isEmpty(){
      return(front==-1);
    }
    bool isFull(){
      return((front==0 && rear==size-1)||front==rear+1);
    }
    void enqueue_rear(int x){
      if(isFull()){
        cout<<"Overflow!"<<endl;
        return;
      }
      if(front==-1){
        front=0;
        rear=0;
      }
      else if(rear==size-1){
        rear=0;
      }
      else{
        rear++;
      }
      arr[rear]=x;
      cout<<"Added "<<x<<" to the rear"<<endl;
    }
    void enqueue_front(int x){
      if(isFull()){
        cout<<"Overflow!"<<endl;
        return;
      }
      if(front==-1){
      front=0;
      rear=0;
    }
      else if(front==0){
        front=size-1;
      }
      else{
        front--;
      }
      arr[front]=x;
      cout<<"Added "<<x<<" to the front"<<endl;
    }
    void dequeue_rear(){
      if(isEmpty()){
        cout<<"Deque is empty."<<endl;
        exit(0);
      }
      if(front==rear){
        front=-1;
        rear=-1;
      }
      else if(rear==0){
        rear=size-1;
      }
      else{
        rear--;
        cout<<"Removed "<<arr[rear]<<" from the rear."<<endl;
      }
    }
    void dequeue_front(){
      if(isEmpty()){
        cout<<"Deque is empty."<<endl;
        exit(0);
      }
      if(front==rear){
        front=-1;
        rear=-1;
      }
      else{
        if(front==size-1){
          front=0;
        }
        else{
          front++;
          cout<<"Removed "<<arr[front]<<" from the front."<<endl;
        }
      }
      }
};
int main(){
  Deque d;
  d.enqueue_rear(5);
  d.enqueue_rear(6);
  d.enqueue_front(7);
  d.enqueue_front(8);
  d.dequeue_front();
  d.dequeue_rear();
  d.dequeue_rear();
  d.dequeue_rear();
  d.dequeue_rear();
  d.dequeue_front();
  return 0;
}
