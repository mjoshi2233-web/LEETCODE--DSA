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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        int maxx=-1,index=-1;
        for(int i=0;i<nums.size();i++){
                    if(nums[i]>maxx){maxx=nums[i];index=i;}
        }
        TreeNode* root=new TreeNode(maxx);

        vector<int> left(nums.begin(),nums.begin()+index);
        vector<int> right(nums.begin()+index+1,nums.end());
        if(left.empty() && right.empty()){return root;}
        if(!left.empty()){
            root->left=constructMaximumBinaryTree(left);
        }
        if(!right.empty()){
            root->right=constructMaximumBinaryTree(right);
        }

        return root;
        
    }
};