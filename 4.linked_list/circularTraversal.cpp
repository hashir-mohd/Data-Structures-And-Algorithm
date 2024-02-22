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
}


int main(){
    node *head = new node(1);
    head->next = new node (2);
    head->next->next = new node (3);
    head->next->next->next = new node (4);
    head->next->next->next->next = new node (5);
    head->next->next->next->next->next = head;
    traverse(head);
}