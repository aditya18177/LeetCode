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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        map<int,int> bt;
        while(!q.empty()){
            TreeNode* temp=q.front().first;
            int lvl=q.front().second;
            q.pop();
            bt[lvl]=temp->val;
            if(temp->left){
                q.push({temp->left,lvl+1});
            }
            if(temp->right){
                q.push({temp->right,lvl+1});
            }
        }
        for(auto x:bt){
            ans.push_back(x.second);
        }
        return ans;
    }
};