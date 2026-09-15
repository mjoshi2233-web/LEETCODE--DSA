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
       int count=1;ListNode* end=NULL;
       if(head==NULL || head->next==NULL){return head;}
       while(t->next!=NULL){
        count++;
        t=t->next;
       
       }end=t;
       t=head;
       int counting=count-(k%count);
       
      ListNode* temp=head;
      int counter=1;ListNode* ans;
      if (counting == 0 || counting == count) {
            return head;
        }
      while(temp){
        if(counter==counting){
            ans=temp->next;
            temp->next=nullptr;
            break;

        }
        temp=temp->next;
        counter++;
        
      }
      end->next=t;
        return ans;
    }
};