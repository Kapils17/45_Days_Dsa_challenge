class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        prefix[0] = 1;
        suffix[nums.size() - 1] = 1;

        //Calculating prefix array
        for(int i = 1; i < prefix.size(); i++){
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        //calculating suffix array
        for(int i = nums.size() - 2; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        //Now calculating the final answer
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++){
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;



    }
};