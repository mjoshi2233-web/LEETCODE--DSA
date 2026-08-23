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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy= new ListNode(0);
        ListNode*temp=dummy;
        if(head ==NULL || head->next==NULL){return head;}
        while(head!=NULL && head->next!=NULL){
           ListNode* first=head->next;
           ListNode* second=head;
           temp->next=first;
           second->next=first->next;
           first->next=second;

           temp=second;
           head=head->next;


        }
        temp->next=head;
        return dummy->next;
    }
};