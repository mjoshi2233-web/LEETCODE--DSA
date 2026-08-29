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
    ListNode* deleteDuplicates(ListNode* headd) {
       ListNode* temp=new ListNode();
       ListNode* head=temp;
       map <int,int> mp;
       while(headd){
        mp[headd->val]++;
        headd=headd->next;
       }
       head=temp;
       for( auto i : mp){
        if(i.second==1){
            ListNode* x=new ListNode(i.first);
            head->next=x;
            head=head->next;

        }
       }
       return temp->next;
        
    }
};