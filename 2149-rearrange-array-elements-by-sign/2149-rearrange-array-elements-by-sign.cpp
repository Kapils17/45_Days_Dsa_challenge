class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        vector<int> positive;
        vector<int> negative;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }
            
            else if(nums[i] < 0){
                negative.push_back(nums[i]);
            }
        }

        int index1 = 0;
        int index2 = 1;

        for(int i = 0; i < positive.size(); i++){
            ans[index1] = positive[i];
            index1 = index1 + 2;
        }

        for(int i = 0; i < negative.size(); i++){
            ans[index2] = negative[i];
            index2 = index2 + 2;
        }

        return ans;

    }
};