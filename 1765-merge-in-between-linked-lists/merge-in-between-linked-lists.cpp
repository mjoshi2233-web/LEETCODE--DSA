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
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* list2) {
        int count=1;
        ListNode* temp=head;
        ListNode* start;
        ListNode* end;
        while(head!=NULL){
            if(count==a){
                start=head;
            }
            if(count==b+1){end = head->next;
            break;
            }
            head=head->next;
            count++;
        }
        start->next=list2;
        while(start->next!=NULL){
            start=start->next;
        }
        start->next=end;
        return temp;


        
    }
};