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

void leftView(node *root){
    if(root ==NULL) return;
    queue <node*> q;
    q.push(root);
    while(q.size()>0){
        int size =q.size();
        for(int i =0;i <size;i ++){
            node*curr= q.front();
            if(i==0) cout << curr->key << " " <<endl;
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
            q.pop();
        }
        
        
    }
    
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    // root->left->left =new node(40);
    // root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    leftView(root);
    return 0;
}