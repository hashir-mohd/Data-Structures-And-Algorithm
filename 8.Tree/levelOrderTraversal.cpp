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

void levelOrderTraversal(node *root){
    if(root == NULL) return;
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    int size =0;
    while( q.size()>1){
        node* curr =q.front();
        if(curr!=NULL) size ++;
        q.pop();
        if(curr ==NULL){
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }
    cout << endl;
    cout << "size : " << size;
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->left->left =new node(40);
    root->left->left->left =new node(70);
    root->right = new node(30);
    root->right->left = new node(50);
    root->right->right =new node(60);
    levelOrderTraversal(root);
    return 0;
}