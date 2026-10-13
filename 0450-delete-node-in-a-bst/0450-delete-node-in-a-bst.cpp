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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){
            return nullptr;
        }
        if(root->val==key){
            return helper(root);
        }
        TreeNode* ans=root;
        while(root){
            if(root->val>key){
                if(root->left!=nullptr && root->left->val==key){
                    root->left=helper(root->left);
                    break;
                }
                root=root->left;
            }
            else{
                if(root->right!=nullptr && root->right->val==key){
                    root->right=helper(root->right);
                    break;
                }
                root=root->right;
            }
        }
        return ans;
    }
private:
   TreeNode* helper(TreeNode* root){
    if(root->right==nullptr){
        return root->left;
    }
    if(root->left==nullptr){
        return root->right;
    }
    TreeNode* l=root->left;
    TreeNode* la=l;
    TreeNode* r=root->right;
    while(l->right){
        l=l->right;
    }
    l->right=r;
    return la;

   }
};