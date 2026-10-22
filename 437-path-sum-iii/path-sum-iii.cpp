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
    void check(TreeNode* root,int target,unordered_map <long long,int> mp,int &count ,long long summ){
         if(root==NULL){return ;}
         summ+=root->val;
         
        
        long long temp=summ-target;
        if(mp.find(temp)!=mp.end()){
                count+=mp[temp];
            }
        mp[summ]++;
        check(root->left,target,mp,count,summ);
        check(root->right,target,mp,count,summ);
        return;




    }
    int pathSum(TreeNode* root, int target) {
        unordered_map <long long,int> mp;
        mp[0]=1;
        long long summ=0;
        int count=0;
        check(root,target,mp,count,summ);
        return count; 
        
    }
};