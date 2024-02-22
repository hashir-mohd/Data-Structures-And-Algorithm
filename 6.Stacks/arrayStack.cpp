#include <iostream>
using namespace std;

struct myStack{
    int *arr;
    int cap;
    int top;

    myStack(int c){
        cap=c;
        arr=new int [cap];
        
        top =-1;
    }

    void push(int x){
        arr[top+1]=x;
        top++;
    }
    int pop(){
        top--;
        return arr[top+1];
    }
    int peek(){
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }
    int size(){
        return top+1;
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout << arr[i]<< " ";
        }
    }
};


int main(){
    myStack s(4);
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    // cout << s.peek() << endl;
    // s.push(6);
    
    s.display();
    return 0;
}