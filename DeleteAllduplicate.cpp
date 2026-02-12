class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* ans = head;
        ListNode* pre = nullptr;

        while (head) {
            bool hasDup = head->next && head->next->val == head->val;

            if (hasDup) {
                int val = head->val;

                // skip entire duplicate block
                while (head && head->val == val) {
                    head = head->next;
                }

                if (pre) {
                    pre->next = head;
                } else {
                    ans = head;  // head duplicates removed
                }
            } 
            else {
                pre = head;
                head = head->next;
            }
        }

        return ans;
    }
};
