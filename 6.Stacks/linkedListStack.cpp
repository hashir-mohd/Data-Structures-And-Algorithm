#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data =x;
        next=NULL;
    }
};


struct myStack{
    node *head;
    int size;
    myStack(){
        head =NULL;
        size =0;
    };
    void push(int x){
        node *temp = new node(x);
        temp->next =head;
        head= temp;
        size++;
    };
    int pop(){
        if(head == NULL){
            cout << " stack is empty" << endl;
            return 0;
        }
        int res= head->data;
        node *temp=head;
        head=head->next;
        delete(temp);
        size--;
        return res;
    };
    int length(){
        return size;
    };
    bool isEmpty(){
        if(head == NULL){
            cout << "stack is empty" << endl;
            return 1;
        }
        else{
            return 0;
        }
    }

};


int main(){
    myStack s;
    s.push(1);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(4);
}
// nj