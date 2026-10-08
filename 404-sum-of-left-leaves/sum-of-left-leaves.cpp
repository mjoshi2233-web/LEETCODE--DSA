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
     void check(TreeNode* root,int &ans,int status){
        if(root==NULL){return ;}
        if((root->left==NULL && root->right==NULL) && status==1){
            ans+=root->val;
            return;
        }
        
        check(root->left,ans,1);
        check(root->right,ans,0);
        return;
        
     }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){return 0;}
        int ans=0;
        check(root,ans,0);
        return ans;
        
    }
};