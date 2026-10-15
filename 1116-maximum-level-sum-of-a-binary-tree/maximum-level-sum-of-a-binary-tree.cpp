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
    int maxLevelSum(TreeNode* root) {
        int maxx=INT_MIN,index=-1;
        vector<TreeNode*> store;
        store.push_back(root);
        int count=0;
        if(root==NULL){return 0;}
        while(!store.empty()){
            int summ=0;
            count++;
            vector<TreeNode*> temp;
            for(int i=0;i<store.size();i++){
                summ+=store[i]->val;
                if(store[i]->left){temp.push_back(store[i]->left);}
                if(store[i]->right){temp.push_back(store[i]->right);}
            }
            if(summ>maxx){maxx=summ;index=count;}
            store=temp;
            
        }
        return index;
    }
};