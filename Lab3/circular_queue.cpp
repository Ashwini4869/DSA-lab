#include<iostream>
#define size 20
using namespace std;
class Queue{
  private:
  int arr[size];
  int rear;
  int front;
  public:
  Queue(){
    front=rear=0;
  }
  bool isEmpty(){
    if(front==rear){
      return true;
    }
    else{
    return false;
    }
  }
  void enqueue(int x){
    rear%=(size-1);
    arr[rear++]=x;
    cout<<"Added item "<<x<<endl;
  }
  void dequeue(){
    if(isEmpty()){
      cout<<"Queue is empty"<<endl;
      exit(0);
    }
    else{
      cout<<"Removing item "<<arr[front++]<<endl;
    }
  }
};
int main(){
  Queue q;
  q.enqueue(5);
  q.enqueue(7);
  q.enqueue(9);
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  return 0;
}
