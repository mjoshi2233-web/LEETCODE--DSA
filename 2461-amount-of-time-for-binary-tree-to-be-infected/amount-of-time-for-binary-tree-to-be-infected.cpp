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
void mark(TreeNode* root,  unordered_map <TreeNode*,TreeNode*> &mp,TreeNode* &target,int start){
    if(root==NULL){return;}
    if(root->left){mp[root->left]=root;}
    if(root->right){mp[root->right]=root;}
    if(root->val==start){target=root;}
    mark(root->left,mp,target,start);
    mark(root->right,mp,target,start);
    return;
   }
    void check(TreeNode* root,int& ans,int count, unordered_map <TreeNode*,TreeNode*> &mp,set <TreeNode*> &visited){
        if(root==NULL || visited.find(root)!=visited.end()){
            ans=max(ans,count-1);
            return;
        }
        visited.insert(root);
      
        check(root->left,ans,count+1,mp,visited);
        check(root->right,ans,count+1,mp,visited);
        check(mp[root],ans,count+1,mp,visited);
        return;}
        
    int amountOfTime(TreeNode* root, int start) {
        TreeNode* target=NULL; unordered_map <TreeNode*,TreeNode*> mp;
        set <TreeNode*> visited;
        mp[root]=NULL;int ans=0;
        mark(root,mp,target,start);
        check(target,ans,0,mp,visited);
        return ans;

        
    }
};