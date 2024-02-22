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

node *sortedInsert(node *head,int key){
    node *temp = new node(key);
    if(head == NULL){
        return temp;
    }
    else if(temp->data < head->data){
        temp->next = head;
        return temp;
    }
    else{
        node *curr = head;
        while(curr->data < temp->data){
            if(curr->next == NULL){
                curr->next = temp;
                return head;
            }
            if(curr->next->data > temp->data){
                temp->next = curr->next;
                curr->next = temp;
                
            }
            curr= curr->next;
        }
        return head;
    }
}



int main(){
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    head = sortedInsert(head,55);
    traverse(head);
}