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

void width(node *root){
    if(root == NULL) return;
    queue <node*> q;
    q.push(root);
    int res=0;
    while( !q.empty()){
        int currwidth=q.size();
        res= max(currwidth,res);
        for(int i =0;i<currwidth;i++){
            node *curr=q.front();
            q.pop();
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        };
        };
        cout << res<< endl;
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    width(root);
    return 0;
}