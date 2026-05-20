class Solution {
public:
    void sortColors(vector<int>& nums) {

      
      for(int i = 0; i<nums.size(); i++){
        for(int j = 0 ; j<nums.size(); j++){
                
                if(nums[j]>nums[i]){
                    swap(nums[i], nums[j]);
                }

        }
      }

    }
};