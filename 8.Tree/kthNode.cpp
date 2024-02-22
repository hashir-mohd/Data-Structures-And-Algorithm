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

void kthNode(node *root, int k){
    if(root ==NULL){
        return;
    }
    if(k==0){
        cout << root->key << " ";
    }
    else{
        kthNode(root->left,k-1);
        kthNode(root->right,k-1);
    }
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right =new node(50);
    kthNode(root,0);
    return 0;
}