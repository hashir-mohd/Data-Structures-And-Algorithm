class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        height(root, diameter);
        return diameter;
    }
private:
    int height(TreeNode* root,int &res) {
        if (root == NULL) return 0;
        int lh= height(root->left);
        int rh= height(root->right);
        res= max(res,lh+rh);
        return 1+max(rh,lh);
    }
};