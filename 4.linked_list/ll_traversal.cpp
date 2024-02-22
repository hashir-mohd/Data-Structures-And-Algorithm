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

void recursive_traversal(node *head){
    if (head==NULL){
        return;
    }
    cout << head->data << endl;
    recursive_traversal(head->next);
}

int main(){
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    // traverse(head);
    recursive_traversal(head);
}