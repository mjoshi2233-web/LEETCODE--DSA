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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()){return NULL;}
        int n=postorder.size();
        TreeNode* root=new TreeNode(postorder[n-1]);
        int temp=postorder[n-1];
        vector<int> leftin;
        vector<int> rightin;
        vector<int> leftpost;
        vector<int> rightpost;
        int i=0;
        while(i<inorder.size()){
            if(inorder[i]==temp){i++;break;}
            leftin.push_back(inorder[i]);
            i++;
        }
        while(i<inorder.size()){
            rightin.push_back(inorder[i]);
            i++;
        }
         i=0;
        while(i<leftin.size()){
            leftpost.push_back(postorder[i]);i++;
        }
        while(i<postorder.size()-1){
            rightpost.push_back(postorder[i]);i++;
        }
        root->left=buildTree(leftin,leftpost);
        root->right=buildTree(rightin,rightpost);
        return root;
    }
};