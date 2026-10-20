/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public: 
    TreeNode* check(TreeNode* root, TreeNode* p, TreeNode* q){
if(root==NULL ||root==p || root==q ){return root;}
TreeNode* left=check(root->left,p,q);
TreeNode* right=check(root->right,p,q);
if(left==NULL){return right;}
if(right==NULL){return left;}
return root;


    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int count=0;
        TreeNode* ans=NULL;
        ans=check(root,p,q);
        return ans;
        
    }
};