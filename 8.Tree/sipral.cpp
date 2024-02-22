#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct node{
    int key;
    node *left;
    node *right ;
    node(int x){
        key=x;
        left= NULL;
        right = NULL;
    };
};

void printSpiral(node *root){
    stack <node*> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            node* curr=s1.top();
            s1.pop();
            cout <<curr->key<<" ";
            if(curr->left!=NULL)s2.push(curr->left);
            if(curr->right!=NULL)s2.push(curr->right);
        };
        while(!s2.empty()){
            node*curr=s2.top();
            s2.pop();
            cout <<curr->key<<" ";
            if(curr->right!=NULL)s1.push(curr->right);
            if(curr->left!=NULL)s1.push(curr->left);
        }

    }
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    printSpiral(root);
    return 0;
}