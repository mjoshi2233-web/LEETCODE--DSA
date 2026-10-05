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
  bool check(TreeNode* root,int target,int summ){
        if(root==NULL){
            
            return false;
        }
        summ+=root->val;
       if(root->left == NULL && root->right == NULL) {
            return summ == target;
        }
         
        return check(root->left,target,summ)||
        check(root->right,target,summ);
       
       


    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){return false;}
        
        
        return check(root,targetSum,0);
        
        
    }
};