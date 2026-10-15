/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
          vector<Node*> store;
        vector<vector<int>> ans;
       store.push_back(root);
       if(root==NULL){return {};}
       while(!store.empty()){
        vector<Node*> temp;
        vector<int> temp1;
        for(int i=0;i<store.size();i++){
                for(int j=0;j<store[i]->children.size();j++){
                    temp.push_back(store[i]->children[j]);
                }
          temp1.push_back(store[i]->val);
        }
        ans.push_back(temp1);
        store=temp;
       }
        return ans;
        
    }
};