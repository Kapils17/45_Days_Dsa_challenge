class Solution {
public:
    bool check(vector<int>& nums) {

        int breakk = 0;

        for(int i = 0; i < nums.size(); i++){
           if(nums[i] > nums[(i+1) % nums.size()]){
            breakk++;
           }
        }

        if(breakk <= 1){
            return true;
        }

        return false;
    }
};