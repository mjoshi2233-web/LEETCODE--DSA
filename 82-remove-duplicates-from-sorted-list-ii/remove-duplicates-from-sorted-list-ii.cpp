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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* dummy=new ListNode(0);
      ListNode* temp=dummy;
      if(!head || !head->next){return head;}
      while(head && head->next){
        if(head->val==head->next->val){
            while(head->next!=NULL && head->val==head->next->val){head=head->next;}
            head=head->next;
        }
        else{temp->next=head;temp=temp->next;  head=head->next;}
      

      }
      temp->next=head;
      return dummy->next;

    }
};