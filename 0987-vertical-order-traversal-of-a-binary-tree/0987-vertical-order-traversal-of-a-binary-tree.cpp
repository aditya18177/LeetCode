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

    void vertical(TreeNode* root,map<int,vector<TreeNode*>>& final,unordered_map<TreeNode*,pair<int,int>>& mappings){
        if(root==NULL) return;
        vertical(root->left,final,mappings);
        final[mappings[root].second].push_back(root);
        vertical(root->right,final,mappings);
    }

    bool comp(TreeNode* a,TreeNode* b,unordered_map<TreeNode*,pair<int,int>>& mappings){
        return mappings[a].first>mappings[b].second;
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        unordered_map<TreeNode*,pair<int,int>> mappings;
        mappings[root]={0,0};
        mapping(root,mappings);
        map<int,vector<TreeNode*>> final;
        vertical(root,final,mappings);
        for(auto a:final){
            vector<TreeNode*> x=a.second;
            sort(x.begin(), x.end(), [&](TreeNode* a, TreeNode* b) {
            int rowA=mappings[a].first;
            int rowB=mappings[b].first;
            if(rowA==rowB)
            return a->val<b->val;
            return rowA<rowB;
            });
            vector<int> temp;
            for(auto y:x){
                temp.push_back(y->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};