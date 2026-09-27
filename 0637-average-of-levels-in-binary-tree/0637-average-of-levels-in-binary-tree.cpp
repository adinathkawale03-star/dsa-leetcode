/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL){return {};}
        vector<double> ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int n=qu.size();
            long long help=0;
            for(int i=0;i<n;i++){
                TreeNode* newnode=qu.front();
                qu.pop();
                if(newnode->left!=NULL){qu.push(newnode->left);}
                if(newnode->right!=NULL){qu.push(newnode->right);}
                help+=newnode->val;
            }
            ans.push_back((double)help/n);
        }
        return ans;
    }
};