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
    int helper(TreeNode* root,int& maxi){
        if(root==NULL) return 0;
        int Lh=max(0,helper(root->left,maxi));
        int Rh=max(0,helper(root->right,maxi));
        maxi=max(maxi,root->val+Lh+Rh);
        return root->val+max(Rh,Lh);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        helper(root,maxi);
        return maxi;
    }
};