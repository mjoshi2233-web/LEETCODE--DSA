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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        vector<TreeNode*> store;
        vector<long long> check;
        store.push_back(root);
        if(root==NULL){return 0;}
        while(!store.empty()){
            long long summ=0;
          
            vector<TreeNode*> temp;
            for(int i=0;i<store.size();i++){
                summ+=store[i]->val;
                if(store[i]->left){temp.push_back(store[i]->left);}
                if(store[i]->right){temp.push_back(store[i]->right);}
            }
            check.push_back(summ);
            store=temp;
            
        }
        if(k>check.size()){return -1;}
        sort(check.begin(),check.end());
        return check[check.size()-k];
        
    }
};