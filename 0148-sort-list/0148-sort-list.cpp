
class Solution {
public:
    ListNode* sortList(ListNode* head) {

      vector<int> v;
      int k = 0;

      if(head == NULL ){
        return NULL;
      }

      if(head -> next == NULL){
        return head;
      }


      ListNode* temp = head;

      while(temp != NULL){
         
         v.push_back(temp -> val) ;
         
         temp = temp -> next;
         k++;
       }

      k = 0;
      temp = head;
       
      sort(v.begin(), v.end());   

      while(temp != NULL){
        
        temp -> val = v[k];

        temp = temp -> next;
        k++;

      }

      return head;
      
    }
};