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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()){return NULL;}
        TreeNode* root=new TreeNode(preorder[0]);
        int temp=preorder[0];int i=0;
        vector<int> leftpre;
        vector<int> rightpre;
         vector<int> leftpost;
        vector<int> rightpost;
        while(i<inorder.size()){
            if(inorder[i]==temp){ i++;break;}
            leftpre.push_back(inorder[i]);
            i++;

        }
        while(i<inorder.size()){
            rightpre.push_back(inorder[i]);
            i++;
        }
        int start=leftpre.size()+1;
        i=1;
        while(i<start){
            leftpost.push_back(preorder[i]);
            i++;

        }
        while(i<preorder.size()){
            rightpost.push_back(preorder[i]);
            i++;
        }
        root->left=buildTree(leftpost,leftpre);
        root->right=buildTree(rightpost,rightpre);
        return root;



        
    }
};