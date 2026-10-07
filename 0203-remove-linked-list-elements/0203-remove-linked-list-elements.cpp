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
    ListNode* removeElements(ListNode* head, int val) {

       ListNode* temp = head;
       vector<int> storeValues;
        
       while(temp != NULL){
        if(temp -> val != val){
            storeValues.push_back(temp -> val);
           
        }

         temp = temp -> next;
       }

       if(storeValues.size() == 0){
        return NULL;
       }

       ListNode* newnode = new ListNode(storeValues[0]);
       temp = newnode;
       ListNode* head2 = newnode;

       for(int i = 1 ; i < storeValues.size(); i++){
        ListNode* newnode = new ListNode(storeValues[i]);
        temp -> next = newnode;
        temp = temp -> next;
       }

       return head2;

    }
};