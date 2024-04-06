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

bool searchBST(node *root,int key){
    if (root == NULL) return false;
    if(root->data == key) return true;
    else if(root->data >key){
        return searchBST(root->left,key);}
    else {
        return searchBST(root->right,key);}
}

bool serachBSTiterative(node *root,int key){
    while(root!=NULL){
        if(root->data==key) return true;
        else if(root->data >key){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}

int main(){

}