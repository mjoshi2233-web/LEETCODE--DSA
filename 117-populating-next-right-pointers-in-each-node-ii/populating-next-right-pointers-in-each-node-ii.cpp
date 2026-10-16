/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         vector<Node*> store;
         if(root==NULL){return root;}
       store.push_back(root);
     
       Node* ans=root;
       while(!store.empty()){
        vector<Node*> temp;
        
        for(int i=0;i<store.size();i++){
           if(store[i]->left){ temp.push_back(store[i]->left);}
        if(store[i]->right){temp.push_back(store[i]->right);}
        
        } if(temp.size()>0){ 
           for(int i=0;i<temp.size()-1;i++){
            temp[i]->next=temp[i+1];
          }}
         
        store=temp;
       }
        return ans;
        
    }
};