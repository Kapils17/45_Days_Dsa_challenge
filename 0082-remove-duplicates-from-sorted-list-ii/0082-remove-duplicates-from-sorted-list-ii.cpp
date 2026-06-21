class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode dummy(0);
    dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            while (curr->next && curr->val == curr->next->val) {
                curr = curr->next;
            }

            if (prev->next != curr) {   // duplicates found
                prev->next = curr->next;
            } else {
                prev = prev->next;
            }

            curr = curr->next;
        }

        return dummy.next;
    }
};