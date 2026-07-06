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
    bool mirror(TreeNode* l,TreeNode* r){
        if(l==NULL || r==NULL) return l==r;
        bool b3=(l->val==r->val);
        bool b1=mirror(l->left,r->right);
        bool b2=mirror(l->right,r->left);
        return b3 && b1 && b2;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return mirror(root->left,root->right);
    }
};