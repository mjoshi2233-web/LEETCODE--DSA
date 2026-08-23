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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        if(head->next==NULL){return NULL;}
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int t=count-n;
        if(t==0){head=head->next;}
        int i=1;
        temp=head;
        while(temp && temp->next!=NULL){
            if(i==t){
                temp->next=temp->next->next;
                break;
            }
            else{
                i++;
                temp=temp->next;
            }
        }
        return head;
        
    }
};