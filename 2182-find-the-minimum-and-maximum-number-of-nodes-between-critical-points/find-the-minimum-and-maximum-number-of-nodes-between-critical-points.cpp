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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pre=head->val;
        head=head->next;
        int minn=INT_MAX;
        int maxx=INT_MIN;
        int count=1,ex=-1,firstex=-1;
        while(head->next!=NULL){
            if((head->val>pre && head->next->val<head->val) || (head->val<pre && head->next->val>head->val) ){
                if(ex!=-1){
                    minn=min(minn,count-ex); }
                else{
                    ex=count;
                }
                if(firstex==-1){
                    firstex=count;
                }
                else{ 
                maxx=max(maxx,count-firstex);
                ex=count; }}
              count++;
            pre=head->val;
            head=head->next;
        }
        if(maxx!=INT_MIN && minn!=INT_MAX){
            return {minn,maxx};
        }
        return {-1,-1};
        
    }
};