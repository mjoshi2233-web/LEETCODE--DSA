/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue <int> pq;
    for(auto x: lists){
        while(x){
            pq.push(x->val);
            x=x->next;
        }
    }
    ListNode* ans=NULL;
    while(!pq.empty()){
        int temp=pq.top();
        pq.pop();
        ans=new ListNode(temp,ans);

    }
    return ans;
        
    }
};