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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){return {};}
        vector<vector<int>> ans;
        TreeNode* newnode=root;
        queue<TreeNode*> qu;
        qu.push(root);
        bool sign=true;
        while(!qu.empty()){
            int n=qu.size();
            vector<int> level(n);
            for(int i=0;i<n;i++){
                int index=sign?i:n-1-i;
                level[index]=qu.front()->val;
                root=qu.front();
                qu.pop();
                if(root->left!=NULL){qu.push(root->left);}
                if(root->right!=NULL){
                    qu.push(root->right);
                }
            }
            sign=sign?false:true;
            ans.push_back(level);
        }
        return ans;
    }
};