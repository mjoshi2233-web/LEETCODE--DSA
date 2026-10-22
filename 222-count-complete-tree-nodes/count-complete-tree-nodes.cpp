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
    void check(TreeNode* root,int& ans){
        if(root==NULL){return;}
        int left=0,right=0;
        TreeNode* temp=root;
        while(temp){
            left++;
            temp=temp->left;
        }
        temp=root;
        while(temp){
            right++;
            temp=temp->right;
        }
        if(left==right ){
           if(left!=0){ 
            ans+=pow(2,left)-1;}
            else{
                ans+=1;
            }

        }
        else{
            ans++;
            check(root->left,ans);
            check(root->right,ans);
        }



        return;
    }
    int countNodes(TreeNode* root) {
        int ans=0;
        check(root,ans);
        return ans;
        
    }
};