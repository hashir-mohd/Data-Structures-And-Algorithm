#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next =NULL;
        prev = NULL;
    }
};

void traverse(node *head){
    while (head!= NULL) {
        cout << head->data << endl;
        head=head->next;
    }   
}

node *deleteHead(node *head){
    if (head == NULL){
        return NULL;
    }
    else if (head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        node *temp = head-> next;
        delete head;
        temp->prev = NULL;

        return temp;
    }
}


int main(){
    node *head = new node(1);
    node *temp1 = new node (2);
    node *temp2 = new node(3);
    head->next=temp1;
    temp1->next =temp2;
    temp1->prev=head;
    temp2->prev = temp1;
    head = deleteHead(head);
    traverse(head);

}