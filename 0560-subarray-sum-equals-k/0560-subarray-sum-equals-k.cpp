class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        vector<int> prefix(nums.size());
        unordered_map<int, int> mp;

        prefix[0] = nums[0];

        for(int i = 1; i < prefix.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int count = 0;

        // Prefix sum 0 exists before the array starts
        mp[0] = 1;

        for(int i = 0; i < prefix.size(); i++) {

            int result = prefix[i] - k;

            if(mp.find(result) != mp.end()) {
                count += mp[result];
            }

            mp[prefix[i]]++;
        }

        return count;
    }
};