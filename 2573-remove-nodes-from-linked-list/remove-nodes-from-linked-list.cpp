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
    ListNode* removeNodes(ListNode* head) {
        stack <int> sp;
        while(head!=nullptr){
            sp.push(head->val);
            head=head->next;

        }
        ListNode* temp=new ListNode(sp.top(),NULL);
        sp.pop();
        int maxx=temp->val;
        
        while(!sp.empty()){
            int curr=sp.top();
            if(curr>=maxx){
                maxx=curr;
                temp=new ListNode(curr,temp);
            }
            sp.pop();




        }
        return temp;
        
    }
};