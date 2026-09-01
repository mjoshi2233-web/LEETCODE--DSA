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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){ 
        stack <int> s1,s2;
        while(l1!=NULL){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            s2.push(l2->val);
            l2=l2->next;
        }
        ListNode* ans=NULL;
        int carry=0;
        while(!s1.empty() || !s2.empty()|| carry !=0){
            int summ=carry;
            if(!s1.empty()){
                int a=s1.top();
                s1.pop();
                summ+=a;
            }
             if(!s2.empty()){
                int a=s2.top();
                s2.pop();
                summ+=a;
            }
            int digit=summ%10;
            ans=new ListNode(digit,ans);
            carry=summ/10;

        }
        return ans;
    }
};