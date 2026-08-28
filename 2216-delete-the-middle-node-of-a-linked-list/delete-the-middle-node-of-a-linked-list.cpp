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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        count=count/2;
        int lets=0;
        head=temp;
        if(head==NULL || head->next==NULL){return nullptr;}
        while(head!=NULL){
            if(lets==count-1){
                head->next=head->next->next;
                
            }
            lets++;
            head=head->next;
        }

        return temp;
    }
};