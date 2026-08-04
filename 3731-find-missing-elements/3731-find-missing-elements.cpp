class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        vector<int> ans;

        if(nums.size() == 1){
            return nums;
        }

        int i = 0;
        int j = 1;

        while(j < nums.size()){

         int val = nums[j] - nums[i];
     
          if(val > 1){
             for(int x = nums[i]+1 ; x < nums[j] ; x++){
                ans.push_back(x);
             }
          }

          i++;
          j++;

        }

        return ans;

        

    }
};