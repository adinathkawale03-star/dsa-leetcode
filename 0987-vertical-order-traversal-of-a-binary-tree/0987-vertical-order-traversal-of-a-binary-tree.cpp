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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>> ans;
       if(!root) return ans;
       map<int,map<int,multiset<int>>> mp;
       queue<pair<TreeNode*,pair<int,int>>> qu;
       qu.push({root,{0,0}});
       while(!qu.empty()){
          auto it=qu.front();
          qu.pop();
          TreeNode* newnode=it.first;
          int x=it.second.first;
          int y=it.second.second;
          mp[x][y].insert(newnode->val);
          if(newnode->left){
              qu.push({newnode->left,{x-1,y+1}});
          }
          if(newnode->right){
              qu.push({newnode->right,{x+1,y+1}});
          }
       }
        for(auto &p:mp){
           vector<int> a;
           for(auto &it:p.second){
              a.insert(a.end(),it.second.begin(),it.second.end());
           }
            ans.push_back(a);
        }
        return ans;


    }
};