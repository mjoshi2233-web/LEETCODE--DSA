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
    vector<double> averageOfLevels(TreeNode* root) {
        queue <TreeNode*> q;
        if(root==NULL){return {};}
        q.push(root);
      vector<double> ans;
        while(!q.empty()){
            int s=q.size();
            double summ=0;
            for(int i=0;i<s;i++){
                TreeNode* temp1=q.front();
                summ+=temp1->val;
                if(temp1->left){q.push(temp1->left);}
                if(temp1->right){q.push(temp1->right);}
                q.pop();

                

            }
            double temp=summ/s;
            ans.push_back(temp);
        }
        return ans;
        
    }
};