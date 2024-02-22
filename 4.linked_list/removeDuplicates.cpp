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

node *removeDuplicate(node *head){
   if(head == NULL){
        return NULL;
   }
   node* curr= head;
    while(curr->next != NULL){
        if(curr->next->data ==curr->data){
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);}
        else{
            curr= curr->next;
        }
   }
    
    
   
    return head;
}

int main(){
    node *head = new node(10);
    head->next = new node (10);
    head->next->next = new node (10);
    head->next->next->next = new node (50);
    head->next->next->next->next = new node (50);
    head = removeDuplicate(head);
    traverse(head);
}