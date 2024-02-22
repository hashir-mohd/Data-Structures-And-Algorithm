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

int isBalanced(node *root){
    if(root == NULL) return 0;
    int lh =isBalanced(root->left);
    if(lh == -1) return -1;
    int rh =isBalanced(root->right);
    if(rh == -1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    cout <<isBalanced(root) << endl;
    return 0;
}