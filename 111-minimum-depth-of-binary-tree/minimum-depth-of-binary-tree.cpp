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
    int check(TreeNode* root){
        if(root==NULL){return 1e9;}
        if(root->left==NULL && root->right==NULL){return 1;}
        int left=1+(check(root->left));
        int right=1+check(root->right);
        return min(left,right);
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr){return 0;}
        int ans=check(root);
        return ans;
        
    }
};