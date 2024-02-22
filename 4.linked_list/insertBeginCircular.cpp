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

// effecient way : insert new node after head and then swap the data of head and the new node;
node *insertBegin(node *head, int key){
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
        return head;
    }
    /*node *tail=head;
    while(tail->next != head){
        tail= tail->next;
    }
    tail->next= temp;
    temp->next= head;
    return temp;*/
};

int main(){
    node *head = new node(1);
    head->next = new node (2);
    head->next->next = new node (3);
    head->next->next->next = new node (4);
    head->next->next->next->next = new node (5);
    head->next->next->next->next->next = head;
    head = insertBegin(head,0);
    traverse(head);
};