class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count  = 0;
        int maxoccur = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count = count + 1;
                maxoccur = max(count , maxoccur);
            }else{
                count = 0;
            }
        }

        return maxoccur;

    }
};