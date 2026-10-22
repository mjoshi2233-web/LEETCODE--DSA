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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){return 0;}
        queue <pair<TreeNode*,long long>> q;
        q.push({root,0});
        long long ans=1;
        while(!q.empty()){
            int size=q.size();
            long long start,end;
            long long minn=q.front().second;
            for(int i=0;i<size;i++){

                if(i==0){start=q.front().second-minn;}
                if(i==size-1){end=q.front().second-minn;}
                
               if(q.front().first->left){ q.push({q.front().first->left,(q.front().second-minn)*2+1});}
               if(q.front().first->right){q.push({q.front().first->right,(q.front().second-minn)*2+2});}
               q.pop();
            }
            ans=max(ans,end-start+1);
   }
        return ans;
    }
};