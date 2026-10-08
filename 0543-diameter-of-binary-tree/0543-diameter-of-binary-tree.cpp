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
    int height(TreeNode* root){
        if(root==NULL){return 0;}
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //brute force solution in the brute force we calculte the diameter of the every node and the return maximum from that by using the recurssion
        if(root==NULL){return 0;}
        int lh=height(root->left);
        int rh=height(root->right);
        int a=lh+rh;
        int a1=diameterOfBinaryTree(root->left);
        int a2=diameterOfBinaryTree(root->right);
        return max(a,max(a1,a2));
    }
};