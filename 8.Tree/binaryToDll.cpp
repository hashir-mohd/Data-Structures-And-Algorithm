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
node *prev= NULL;
node *binaryToDll(node *root){
    if(root ==NULL) return root;
    node*head=binaryToDll(root->left);
    if(::prev==NULL) head == root;
    else{
        root->left=::prev;
        ::prev->right=root;
    }
    ::prev =root;
    binaryToDll(root->right);
    return head;

};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    cout <<binaryToDll(root) <<endl;
    return 0;
}