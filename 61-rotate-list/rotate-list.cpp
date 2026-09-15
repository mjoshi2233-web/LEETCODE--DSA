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
    ListNode* rotateRight(ListNode* head, int k) {
      ListNode* t=head;
       int count=0;
       if(head==NULL || head->next==NULL){return head;}
       while(t!=NULL){
        count++;
        t=t->next;
       
       }
       count=count-(k%count);
       while(count>0){
        ListNode* temp=head;
        head=head->next;
        ListNode* mover=head;
        while(mover->next!=NULL){mover=mover->next;}
        mover->next=temp;
        temp->next=NULL;
        count--;
       }
       return head;
      
        
    }
};