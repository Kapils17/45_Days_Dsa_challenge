class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> storevalues;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        // Store list1 values
        while(temp1 != NULL) {
            storevalues.push_back(temp1->val);
            temp1 = temp1->next;
        }

        // Store list2 values
        while(temp2 != NULL) {
            storevalues.push_back(temp2->val);
            temp2 = temp2->next;
        }

        // Sort all values
        sort(storevalues.begin(), storevalues.end());

        // If both lists are empty
        if(storevalues.empty()) {
            return NULL;
        }

        // Create a new linked list
        ListNode* head = new ListNode(storevalues[0]);
        ListNode* temp = head;

        for(int i = 1; i < storevalues.size(); i++) {
            temp->next = new ListNode(storevalues[i]);
            temp = temp->next;
        }

        return head;
    }
};