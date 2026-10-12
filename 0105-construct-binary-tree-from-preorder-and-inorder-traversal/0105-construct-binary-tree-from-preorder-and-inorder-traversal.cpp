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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return build(inorder,0,inorder.size()-1,preorder,0,preorder.size(),mp);
    }
private:
    TreeNode* build(vector<int>& inorder,int instart,int inend,vector<int>& preorder,int prestart,int preend,unordered_map<int,int>& mp){
        if(instart>inend || prestart>preend){
            return nullptr;
        }
        TreeNode* root=new TreeNode(preorder[prestart]);
        int rootl=mp[root->val];
        int numsl=rootl-instart;
        root->left=build(inorder,instart,rootl-1,preorder,prestart+1,prestart+numsl,mp);
        root->right=build(inorder,rootl+1,inend,preorder,prestart+numsl+1,preend,mp);
        return root;
    }
};