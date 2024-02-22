#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data=x;
        next =NULL;
    }
};

struct queue{
    node*front,*rear;
    queue(){
        front=NULL;
        rear=NULL;
    };
    void enque(int x){
        node *temp= new node(x);
        if(front == NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    
    void deque(){
        if(front==NULL){
            return;
        }
        node *temp =front;
        front=front->next;
        if(front == NULL){rear=NULL;}
        delete(temp);
    }
    
};

int main(){
    // queue q(5);
    // q.enque(1);
    // q.enque(2);
    // q.enque(3);
    // q.enque(4);
    // q.enque(5);
    // q.deque();
    // q.deque();
    // q.enque(6);
    // q.deque();

    
    // cout << "Queue elements: ";
    // q.printQueue();
    return 0;
}
