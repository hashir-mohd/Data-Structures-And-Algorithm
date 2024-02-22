#include <iostream>
using namespace std;

struct queue{
    int size,cap;
    int *arr;
    queue(int x){
        cap =x;
        size=0;
        arr= new int[cap];
    };
    int front,rear;
    void enque(int x){
        if(isFull()){
            return;
        }
        arr[rear+1]=x;
        front =0;
        size++;
        rear++;
    };
    int deque(){
        int res= arr[front];
        for(int i =0;i<size-1 ;i++){
            arr[i]=arr[i+1];
            size--;
        }
        
        return res;
    };
    int getFront(){
        return arr[0];
    };
    int getRear(){
        return arr[size-1];
    };
    bool isFull(){
        return(size==cap);
    };
    bool isEmpty(){
        return(size==0);
    };
    int size(){
        return size;
    }
};

int main(){
    queue q(5);

    return 0;
}
