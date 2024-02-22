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

node *insertPos(node *head,int pos,int key){
    node*temp = new node(key);

    if (pos == 1){
        temp->next= head;
        return temp;
    }
    int i =1;
    node *curr= head;
    while(i != (pos-1)){
        curr= curr->next;
        i++;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    node *head = new node (10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    head = insertPos(head,5,5);
    // head = insert (head,0);
    // head = insert(head,5);
    // head = insert(head,10);
    traverse(head);
}