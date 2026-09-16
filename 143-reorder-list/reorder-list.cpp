class Solution {
public:
    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL || head->next->next == NULL) {
            return;
        }

        vector<int> a;
        stack<int> s;

        ListNode* temp = head;

        int count = 0;

        // Count nodes
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        temp = head;

        // First half -> vector
        // Second half -> stack
        for(int i = 1; i <= count; i++) {

            if(i <= count / 2) {
                a.push_back(temp->val);
            }
            else {
                s.push(temp->val);
            }

            temp = temp->next;
        }

        temp = head;

        int x = 0;
        bool flag = true;

        // Only process first count/2 pairs
        for(int i = 0; i < count / 2; i++) {

            temp->val = a[x];
            x++;
            temp = temp->next;

            temp->val = s.top();
            s.pop();
            temp = temp->next;
        }

        // If odd, put middle element at the end
        if(count % 2 == 1) {
            temp->val = s.top();
            s.pop();
        }
    }
};