#include <iostream>
#include <queue>
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

bool isCSum(node *root){
    int sum=0;
    if(root == NULL) return true;
    if(root->left== NULL && root->right==NULL) return true;
    if(root->left!=NULL){sum+=root->left->key;}
    if(root->right!=NULL){sum+=root->right->key;}
    return(sum == root->key && isCSum(root->left)&& isCSum(root->right));

    
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    cout <<isCSum(root) << endl;
    return 0;
}