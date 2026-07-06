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
    void mapping(TreeNode* root,unordered_map<TreeNode*,pair<int,int>>& mappings){
        if(root==NULL) return;
        int currx=mappings[root].first;
        int curry=mappings[root].second;
        if(root->left){
            mappings[root->left]={currx+1,curry-1};
            mapping(root->left,mappings);
        }
        if(root->right){
            mappings[root->right]={currx+1,curry+1};
            mapping(root->right,mappings);
        }
    }

    void vertical(TreeNode* root,map<int,map<int,multiset<int>>>& final,unordered_map<TreeNode*,pair<int,int>>& mappings){
        if(root==NULL) return;
        vertical(root->left,final,mappings);
        int col=mappings[root].second;
        int row=mappings[root].first;
        final[col][row].insert(root->val);
        vertical(root->right,final,mappings);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        unordered_map<TreeNode*,pair<int,int>> mappings;
        mappings[root]={0,0};
        mapping(root,mappings);
        map<int,map<int,multiset<int>>> final;
        vertical(root,final,mappings);
        for(auto a:final){
            vector<int> temp;
            for(auto x:a.second){
                for(auto y:x.second){
                    temp.push_back(y);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};