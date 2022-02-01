#include<iostream>
#define size 20
using namespace std;
class Queue{
  private:
    int arr[size];
    int front;
    int rear;
  public:
    Queue(){
      front=rear=-1;
    }
    void enqueue(int x){
      if(rear>=size-1){
        cout<<"Queue Overflow!"<<endl;
        exit(0);
      }
      else if(front==rear==-1){
        front=rear=0;
      }
      else{
        rear++;
      }
      arr[rear]=x;
      cout<<"Added "<<x<<" to the queue"<<endl;
    }
    void dequeue(){
      if(rear==front){
        cout<<"Queue Underflow!"<<endl;
        exit(0);
      }
      else{
        cout<<"removing item "<<arr[++front]<<endl;
      }
    }
};
int main(){
  Queue q;
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  return 0;
}
