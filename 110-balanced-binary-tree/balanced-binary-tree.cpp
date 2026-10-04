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
        if(root==NULL){return 0;}
        int left=1+check(root->left);
        int right=1+check(root->right);
        if(left==-9 || right==-9){return -10;}
        if(abs(left-right)>1){return -10;}
        return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int ans=check(root);
        if(ans==-10){return false;}
        else{return true;}
    }
};