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


node *deleteKth(node *head,int k){
        if(head == NULL) return NULL;
        // if(k == 1) return deleteHeadCircualr(head);
        node *curr = head;
        int i =1;
        while(i<k-1){
            curr= curr->next;
            i++;
        }
        node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    
};

int main(){
    node *head = new node(11);
    head->next = new node (22);
    head->next->next = new node (33);
    head->next->next->next = new node (44);
    head->next->next->next->next = new node (55);
    head->next->next->next->next->next = head;
    head = deleteKth(head,5);
    traverse(head);
};