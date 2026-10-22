/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void mark(TreeNode* root,  unordered_map <TreeNode*,TreeNode*> &mp){
    if(root==NULL){return;}
    if(root->left){mp[root->left]=root;}
    if(root->right){mp[root->right]=root;}
    mark(root->left,mp);
    mark(root->right,mp);
    return;
   }
   void check(TreeNode* root,int k,int count, unordered_map <TreeNode*,TreeNode*> mp,set <TreeNode*> &visited,vector<int>& ans){
        if(root==NULL || visited.find(root)!=visited.end()){
            return;
        }
        visited.insert(root);
        if(count==k){ans.push_back(root->val);return;}
        check(root->left,k,count+1,mp,visited,ans);
        check(root->right,k,count+1,mp,visited,ans);
        check(mp[root],k,count+1,mp,visited,ans);
        return;
        




   }
 
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       unordered_map <TreeNode*,TreeNode*> mp;
       mp[root]=NULL;
       set <TreeNode*> visited;
       mark(root,mp);
       vector<int> ans;
       check(target,k,0,mp,visited,ans);
       return ans;


        
    }
};