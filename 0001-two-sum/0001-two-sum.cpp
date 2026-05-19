class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
         int sum = 0;
         int n = nums.size();

         int first = 0;
         int last = first + 1;

         for(int i = 0; i < n ; i++ ){
            first = i;
            last = i + 1;
            
            while(last != n){
              sum = nums[first] + nums[last];

              if(sum == target){
                   return {first, last};
              }

              last++;
           
            }
            
         }

               return {};

        


    }
};