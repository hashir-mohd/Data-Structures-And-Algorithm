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

node *reverse(node *head){
    if(head == NULL || head->next ==NULL){
        return head;
    }
    node *temp = NULL; 
    node *curr = head;
    
    while(curr != NULL){
        // temp = head->next;
        // head->next = head->prev;
        // head->prev = temp;
        // head = head->prev;
        
        temp = curr->prev;
        curr->prev = curr-> next;
        curr->next = temp;
        curr = curr->prev;
    }
    
    return temp->prev;
}


int main(){
    // node *head = NULL;
    node *head = new node(1);
    node *temp1 = new node (2);
    node *temp2 = new node(3);
    head->next=temp1;
    temp1->next =temp2;
    temp1->prev=head;
    temp2->prev = temp1;
    head = reverse(head);
    traverse(head);

}