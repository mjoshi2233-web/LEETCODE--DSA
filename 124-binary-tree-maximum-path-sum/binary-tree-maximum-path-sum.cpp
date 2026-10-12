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
    int check(TreeNode* root, int & ans){
        if(root==NULL){return 0;}
        int left=check(root->left,ans);
        int right=check(root->right,ans);
        int temp=max(left,right);
        int x=max(temp+root->val,root->val);
        int x2=max(x,left+right+root->val);
        ans=max(ans,x2);
        return max(root->val,max(left,right)+root->val);

    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        check(root,ans);
        return ans;
        
    }
};