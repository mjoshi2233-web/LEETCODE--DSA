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
  void check(TreeNode* root,int &ans,int temp){
     temp=temp*10+root->val;
    if(root->left==NULL && root->right==NULL){ ans+=temp;return ;}
   
    if(root->left){check(root->left,ans,temp);}
    if(root->right){check(root->right,ans,temp);}
    return;
    
  }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        check(root,ans,0);
        return ans;
    }
};