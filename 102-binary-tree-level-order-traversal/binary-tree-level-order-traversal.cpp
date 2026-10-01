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
        queue <TreeNode*> q;
        if(root==NULL){return {};}
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int s=q.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
                TreeNode* temp1=q.front();
                temp.push_back(temp1->val);
                if(temp1->left){q.push(temp1->left);}
                if(temp1->right){q.push(temp1->right);}
                q.pop();

                

            }
            ans.push_back(temp);
        }
        return ans;
    }
};