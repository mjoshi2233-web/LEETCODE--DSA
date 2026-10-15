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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode*> store;
        vector<vector<int>> ans;
       store.push_back(root);
       if(root==NULL){return {};}
       while(!store.empty()){
        vector<TreeNode*> temp;
        vector<int> temp1;
        for(int i=0;i<store.size();i++){
           if(store[i]->left){ temp.push_back(store[i]->left);}
        if(store[i]->right){temp.push_back(store[i]->right);}
          temp1.push_back(store[i]->val);
        }
        ans.push_back(temp1);
        store=temp;
       }
        return ans;
    }
};