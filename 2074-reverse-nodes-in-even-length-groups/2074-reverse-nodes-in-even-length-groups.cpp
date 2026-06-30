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

    ListNode* reverse(ListNode* head, int k) {

        ListNode *prev = nullptr, *curr = head;

        while (k--) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevGroup = &dummy;
        ListNode* curr = head;

        int groupSize = 1;

        while (curr) {

        int count = 0;
            ListNode* temp = curr;

         while (temp && count < groupSize) {
                temp = temp->next;
                count++;
            }

            if (count % 2 == 0) {

                ListNode* nextGroup = temp;

                ListNode* newHead = reverse(curr, count);

                prevGroup->next = newHead;
                curr->next = nextGroup;

                prevGroup = curr;
                curr = nextGroup;
            }
            else {

          for (int i = 0; i < count; i++) {
                    prevGroup = curr;
                    curr = curr->next;
                }
            }

            groupSize++;
        }

        return dummy.next;
    }
};