class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

       int left = 0;
       int right = 0;

       int zero = 0;
       int maxlen = 0;

       while(right < nums.size()){
         
        if(nums[right] == 0){
           zero++;
        }

        if(zero > k){
            while(zero > k){
                if(nums[left] == 0 ){
                    zero--;
                }

                left++;
            } 
        }
         
        int len = right - left + 1;
        maxlen = max(maxlen , len);
      
        right++;
 
       }    
     return maxlen;

    }
};