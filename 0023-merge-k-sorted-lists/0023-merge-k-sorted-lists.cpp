class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> copyval;


        for (ListNode* head : lists) {
            while (head != nullptr) {
                copyval.push_back(head->val);
                head = head->next;
            }
        }

        if (copyval.empty())
            return nullptr;

    
        sort(copyval.begin(), copyval.end());

        ListNode* head = new ListNode(copyval[0]);
        ListNode* temp = head;

        for (int i = 1; i < copyval.size(); i++) {
            temp->next = new ListNode(copyval[i]);
            temp = temp->next;
        }

        return head;
    }
};