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
    while (head!= NULL) {
        cout << head->data << endl;
        head=head->next;
    }   
}

node *deleteLast(node *head){
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr=curr->next;
    }   
    delete (curr->next);
    curr->next = NULL;
    return head;

    /* not the below code
    while(curr->next !=NULL){
        curr=curr->next;    
    }
    delete (curr);
    curr =NULL;
    return head;*/
}

int main(){
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    head = deleteLast(head);
    traverse(head);
}