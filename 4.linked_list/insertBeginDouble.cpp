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

node *insertBegin(node *head,int key){
    node *temp= new node(key);
    temp->next = head;
    if (head !=NULL){
        head->prev = temp;
    }
    return temp;
}


int main(){
    node *head = new node(1);
    node *temp1 = new node (2);
    node *temp2 = new node(3);
    head->next=temp1;
    temp1->next =temp2;
    temp1->prev=head;
    temp2->prev = temp1;
    head = insertBegin(head,0);
    traverse(head);

}