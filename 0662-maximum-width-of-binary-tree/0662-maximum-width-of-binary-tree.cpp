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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        long long ans=0;
        queue<pair<TreeNode*,long long>> qu;
        qu.push({root,0});
        while(!qu.empty()){
            int n=qu.size();
            long long mini=qu.front().second;
            long long first=0,last=0;
            for(int i=0;i<n;i++){
                auto it=qu.front();
                qu.pop();
                root=it.first;
                long long c=it.second-mini;
                if(i==0){
                    first=c;
                }
                if(i==n-1){
                    last=c;
                }
                if(root->left){
                    qu.push({root->left,2*c+1});
                }
                if(root->right){
                    qu.push({root->right,2*c+2});
                }
                ans=max(ans,last-first+1);
            }
        }
        return (int)ans;
    }
};