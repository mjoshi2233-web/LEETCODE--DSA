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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack <int> mp;
        int count=0;ListNode* point=head;
        ListNode* ans=new ListNode(0);
        ListNode* final=ans;
        while(head){
            count++;
            mp.push(head->val);
            if(count==k){
                while(!mp.empty()){
                    int temp=mp.top();
                    mp.pop();
                    ans->next=new ListNode(temp);
                    ans=ans->next;
                }
               head=head->next;
               point=head;
                count=0;
            }
            else{head=head->next;}
             

        }
        ans->next=point;
        return final->next;
        
    }
};