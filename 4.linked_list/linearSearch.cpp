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

int search(node *head, int key){
    int index=1;
   /* this changes the head to the postion of the key 
   while(head != NULL){
        if(head->data == key){
            return index;
        }
        head=head->next;
        index++;
    }*/
    node *curr = head;
    while (curr != NULL){
        if(curr->data == key){
            return index;
        }
        else{
            index++;
            curr=curr->next;
        }
    }
    return -1;
}

int recSearch(node *head, int key,int index){
    // the method taught by gfg doesnot need to take the index as parameter of function in recursive search
    node *curr = head;
    if ( curr == NULL){
        return -1;
    }
    else if(curr->data == key){
        return index;
    }
    else{
        index ++;
        curr=curr->next;
    }
    recSearch(curr,key,index);
}

int main(){
    node *head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node (40);
    head->next->next->next->next = new node (50);
    // cout << search(head,20) << endl;
    cout << recSearch(head,50,1) << endl;
}