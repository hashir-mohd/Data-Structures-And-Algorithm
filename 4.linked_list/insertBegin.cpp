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
    // node *head1=head;
    node *temp= new node(x);
    temp->next = head;
    return temp;
    // temp_head=head;
    // head1=head->next;
}

int main(){
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    head = insert (head,0);
    head = insert(head,5);
    traverse(head);
}