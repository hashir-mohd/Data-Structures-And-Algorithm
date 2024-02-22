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

void traverse(node *head){
    if(head == NULL){
        return ;
    }
    node *curr = head;
    do
    {
        cout << curr->data << endl;
        curr=curr->next;
    } while (curr != head);   
};


node *deleteHead(node *head){
  if(head == NULL){
    return NULL;
  } 
  else if(head->next == head){
    delete head;
    return NULL;
  } 
  // my weak point= node deletion; learn the procedure to delete node;
  else{
    head->data = (head->next)->data;
    node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
  }
  /*else{
    node *tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    tail->next = head->next;
    delete head;
    return (tail->next);
  }*/

};

int main(){
    node *head = new node(11);
    head->next = new node (22);
    head->next->next = new node (33);
    head->next->next->next = new node (44);
    head->next->next->next->next = new node (55);
    head->next->next->next->next->next = head;
    head = deleteHead(head);
    traverse(head);
};