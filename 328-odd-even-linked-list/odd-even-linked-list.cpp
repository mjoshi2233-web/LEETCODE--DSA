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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* first=head;
        ListNode* second=head->next;
        ListNode* ans=second;
        while(first!=NULL && second!=NULL){
            if(first->next!=NULL && first->next->next!=NULL){
                first->next=first->next->next;
                first=first->next;
            }
            if(second->next!=NULL){
                second->next=second->next->next;
                second=second->next;
            }
            else{
                break;
            }
            

        }
        first->next=ans;
        return head;
    }
};