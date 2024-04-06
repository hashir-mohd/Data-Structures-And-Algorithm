#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right ;
    node(int x){
        data=x;
        left= NULL;
        right = NULL;
    };
};

node* getSuccessor(node * curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

node* deleteBST(node *root,int key){
    if(root == NULL) return root;
    if(root->data > key){
        root->left= deleteBST(root->left,key);
    }
    else if(root->data < key){
        root->right= deleteBST(root->right,key);
    }
    else{
        if(root->left == NULL){
            node* temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right ==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            node* temp = getSuccessor(root);
            root->data= temp->data;
            root->right=deleteBST(root->right,temp->data);
        }
        return root;
    }
}



