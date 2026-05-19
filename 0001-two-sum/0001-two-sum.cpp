class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for(int first = 0; first < n; first++) {

            int last = first + 1;

            while(last < n) {

                int sum = nums[first] + nums[last];

                if(sum == target) {
                    return {first, last};
                }

                last++;
            }
        }

        return {};
    }
};