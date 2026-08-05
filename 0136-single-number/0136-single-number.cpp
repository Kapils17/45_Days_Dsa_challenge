class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
      if(nums.size() == 1){
        return nums[0];
      }

     sort(nums.begin() , nums.end());

     int i = 0;
     int j = 1;

     while(j <= nums.size()){
         if(nums[i] != nums[j]){
            return nums[i];
         }

         i += 2;
         j += 2;
     }

     return -1;

    }
};