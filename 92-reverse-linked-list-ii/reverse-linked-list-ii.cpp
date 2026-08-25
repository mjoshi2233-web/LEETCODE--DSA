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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        if(head==NULL || head->next==NULL){return head;}
        int count=0;
        while(head!=NULL){
            count++;
            if(count>right){
                while(temp->next!=NULL){temp=temp->next;}
                temp->next=head;
                return ans->next;
            }
           if(count>=left && count <=right){
               ListNode* x=temp->next;
               temp->next=new ListNode(head->val,x);
               head=head->next;

            }
            else{
               temp->next = new ListNode(head->val);
                temp=temp->next;head=head->next;
            }
            

        }return ans->next;      
    }
};