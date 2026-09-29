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
    ListNode* partition(ListNode* head, int x) {
        ListNode* first=new ListNode();
         ListNode* second=new ListNode();
         ListNode* ans=first;
         ListNode* y=second;
        
        while(head!=NULL){
            if(head->val<x){
                first->next=new ListNode(head->val);
                first=first->next;
                    
                      
                      
            }
            else{
               second->next=new ListNode(head->val);
               second=second->next;
            }
            head=head->next;

        }
        first->next=y->next;
        return ans->next;
    }
};