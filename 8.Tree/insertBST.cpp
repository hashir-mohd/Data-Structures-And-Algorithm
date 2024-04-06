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

node* insertBST(node *root,int key){
  if(root==NULL){
    return new node(key);
  }
  else if(root->data > key){
    root->left =insertBST(root->left,key);
  }
  else{
    root->left =insertBST(root->right,key);
  }
  return root;
}

bool insertBSTiterative(node *root,int key){
   node *temp = new node(key);
   node* parent =NULL;
   node *curr= root;
   while (curr!=NULL)
   {
    parent = curr;
    if(curr->data >key){ curr=curr->left;}
    else if(curr->data <key){curr=curr->right;}
    else{return root;}
   }
   if(parent == NULL){return temp;}
   if(parent->data >key){parent->left =temp;}
   else{parent->right=temp;}
   return root;
   
}

