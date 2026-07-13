class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return head;

        vector<int> v;

        ListNode* temp = head;

        while(temp != NULL){
            v.push_back(temp->val);
            temp = (temp->next) ? temp->next->next : NULL;
        }

   
        temp = head->next;

        while(temp != NULL){
            v.push_back(temp->val);
            temp = (temp->next) ? temp->next->next : NULL;
        }

        temp = head;
        int k = 0;

        while(temp != NULL){
            temp->val = v[k++];
            temp = temp->next;
        }

        return head;
    }
};