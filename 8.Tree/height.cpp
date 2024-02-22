#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
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

int height(node *root){
    if(root==NULL) return 0;
    else {
        return max(height(root->left),height(root->right))+1;
    }
};

int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right =new node(50);
    cout << height(root) << endl;
    return 0;
}