class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
      priority_queue<int> pq;

      for(int i = 0; i < stones.size(); i++){
        pq.push(stones[i]);
      }


      if(pq.size() == 1){
        return pq.top();
      }

      while(pq.size() > 1){
            
         int el1 = pq.top();
         pq.pop();

         int el2 = pq.top();
         pq.pop();

         if(el1 == el2 && pq.size() == 0){
            return 0;
         }

         if(el1 > el2){
            pq.push(el1 - el2);
         } 
         else if(el1 < el2){
            pq.push(el2 - el1);
         }

      }

      return pq.top();

    }
};