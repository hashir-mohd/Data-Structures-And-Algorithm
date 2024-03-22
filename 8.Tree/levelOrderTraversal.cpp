
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root ==NULL) return ans;
        queue <TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            vector <int> v;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
                
                v.push_back(curr->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};