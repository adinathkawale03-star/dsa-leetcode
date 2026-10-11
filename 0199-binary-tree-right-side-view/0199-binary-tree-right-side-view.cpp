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
    void help(TreeNode* root,int l,vector<int> &ans){
        if(root==nullptr){ return;}
        if(l==ans.size()){
            ans.push_back(root->val);
        }
        help(root->right,l+1,ans);
        help(root->left,l+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
      vector<int> ans;
      if(root==nullptr){ return ans;}
      int l=0;
      help(root,l,ans);
      return ans;
    }
};