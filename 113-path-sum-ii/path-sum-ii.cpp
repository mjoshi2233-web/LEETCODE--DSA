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
    void check(TreeNode* root,int target,vector<vector<int>>& ans,vector<int> temp,int summ){
        if(root==NULL){
            
            return;
        }
        summ+=root->val;
        temp.push_back(root->val);
         if(root->left==nullptr && root->right==NULL ){
            if(summ==target){
                ans.push_back(temp);
                return;
            }
        }
        check(root->left,target,ans,temp,summ);
        check(root->right,target,ans,temp,summ);
       
        return;


    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        
        vector<vector<int>> ans;
        vector<int> temp;
        check(root,targetSum,ans,temp,0);
        return ans;
        
    }
};