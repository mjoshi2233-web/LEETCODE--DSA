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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head=new ListNode(0);
        ListNode* k=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0 ){
            int summ=carry;
            if(l1!=NULL){
                int temp=l1->val;
                summ+=temp;
                l1=l1->next;
            }
            if(l2!=NULL){
                int temp=l2->val;
                summ+=temp;
                l2=l2->next;
            }

            int digit=summ%10;
            carry=summ/10;
            head->next=new ListNode(digit);
            head=head->next;
            
        }






        return k->next;
        
    }
};