#include<iostream>
using namespace std;
class Queue{
  
  int* arr;
  int size;
  int front;
  int rear;

  public:

  Queue(){
    int size = 100001;
    arr = new int[size];
    front = 0;
    rear = 0;
  }

  void push(int data){
    if ( rear == size){
         cout << " Queue is Full " << endl;
    }

    else{
      arr[rear] = data;
      rear++;
    }
  }

  int pop(){
    if ( front == rear){
      cout << " Queue is Empty " << endl;
      return -1;
      }

      else{
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if ( front == rear){
          front = 0;
          rear = 0;
        }      
        
        return ans;
        }

  }

  bool isEmpty(){
    if ( front == rear){
      return true;
    }
    else{
      return false;
    }
  }

  int toporfront(){
    if (front == rear){
      cout << " No Front present " << endl;
      return -1;
    }
    else{
      return arr[front];
    }
  }


};

int main(){
 Queue q;
 

 cout << " Emppty is --> " << q.isEmpty() << endl;
}