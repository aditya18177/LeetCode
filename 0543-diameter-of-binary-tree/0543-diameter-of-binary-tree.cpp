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
    int helper(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int Lh=helper(root->left,maxi);
        int Rh=helper(root->right,maxi);
        maxi=max(maxi,Rh+Lh);
        return 1+max(Rh,Lh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        helper(root,maxi);
        return maxi;
    }
};