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

node *insert(node *head,int x){
    node *temp = new node(x);
    if (head == NULL){
        return temp;
    }
    node *main_head=head;
    while(head->next != NULL){
        head=head->next;
    }
    head->next=temp;
    return main_head;
}

int main(){
    node *head = NULL;
    // head->next = new node (20);
    // head->next->next = new node (30);
    // head->next->next->next = new node (40);
    // head->next->next->next->next = new node (50);
    head = insert (head,0);
    head = insert(head,5);
    head = insert(head,10);
    traverse(head);
}