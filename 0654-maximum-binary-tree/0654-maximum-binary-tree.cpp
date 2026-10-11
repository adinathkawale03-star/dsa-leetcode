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
    TreeNode*  build(vector<int> &nums,int low,int high){
        if(low>high){return nullptr;}
        int maxi=low;
        for(int i=low+1;i<=high;i++){
           if(nums[i]>nums[maxi]){
            maxi=i;
           }
        }
        TreeNode* newnode=new TreeNode(nums[maxi]);
        newnode->left=build(nums,low,maxi-1);
        newnode->right=build(nums,maxi+1,high);
        return newnode;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
};