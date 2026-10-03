class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        int j = 1;

        if(nums.size() == 1){
            return nums[0];
        }

        while(j < nums.size()){
            if(nums[i] != nums[j]){
                return nums[i];
            }

            i+=2;
            j+=2;
        }

        return nums[i];
    }
};