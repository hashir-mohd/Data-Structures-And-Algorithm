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

node *insertEnd(node *head,int key){
    node *temp = new node(key);
    node *curr = head;
    if(head == NULL){
        return temp;
    }
    while(curr->next != NULL){
        curr= curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    return head;   
}


int main(){
    node *head = NULL;
    // node *head = new node(1);
    // node *temp1 = new node (2);
    // node *temp2 = new node(3);
    // head->next=temp1;
    // temp1->next =temp2;
    // temp1->prev=head;
    // temp2->prev = temp1;
    head = insertEnd(head,1);
    head = insertEnd(head,2);
    traverse(head);

}