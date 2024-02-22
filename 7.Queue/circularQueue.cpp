#include <iostream>
using namespace std;

struct queue{
    int size,cap,front;
    int *arr;
    queue(int x){
        cap =x;
        size=0;
        front=0;
        arr= new int[cap];
    };
    
    void enque(int x){
        if(isFull()) return;
        int rear =getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    };
    int deque(){
        if(isEmpty()) return -1;
        front =(front +1)%cap;
        size--;
        
    };
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return front;
        }
    };
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return((front+size-1)%cap);
        }
    };
    bool isFull(){
        return(size==cap);
    };
    bool isEmpty(){
        return(size==0);
    };
    // int size(){
    //     return size;
    // };
    void printQueue(){
        if(isEmpty()){
            cout << "Queue is empty." << endl;
            return;
        }
        
        int i = front;
        while(i != getRear()){
            cout << arr[i] << " ";
            i = (i + 1) % cap;
        }
        cout << arr[i] << endl;
    }
};

int main(){
    queue q(5);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.deque();
    q.deque();
    q.enque(6);
    q.deque();

    
    cout << "Queue elements: ";
    q.printQueue();
    return 0;
}
