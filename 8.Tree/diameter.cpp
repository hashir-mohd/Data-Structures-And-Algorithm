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
int res=0;
int diameter(node *root){
    if(root == NULL) return 0;
    int lh =diameter(root->left);
    
    int rh =diameter(root->right);
    res=max(res,1+rh+lh);
    
    return 1+max(rh,lh);
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    diameter(root);
    cout << res <<endl;
    return 0;
}