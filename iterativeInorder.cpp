#include <iostream>
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

void inorder(node *root){
    
    
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    inorder(root);
    return 0;
}