class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans(nums.size());

        int index1 = 0;
        int index2 = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans[index1] = nums[i];
                index1+=2;
            }

            else{
                ans[index2] = nums[i];
                index2+=2;
            }
        }

        return ans;

    }
};