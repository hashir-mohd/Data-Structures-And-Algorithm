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
    if(head == NULL){
        return ;
    }
    node *curr = head;
    do
    {
        cout << curr->data << endl;
        curr=curr->next;
    } while (curr != head);   
};


node *insertEnd(node *head, int key){
    node *temp = new node(key);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
    /*else{
        node *tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = temp;
        temp->next = head;
        return head;
    }*/
};

int main(){
    node *head = new node(11);
    head->next = new node (22);
    head->next->next = new node (33);
    head->next->next->next = new node (44);
    head->next->next->next->next = new node (55);
    head->next->next->next->next->next = head;
    head = insertEnd(head,66);
    traverse(head);
};