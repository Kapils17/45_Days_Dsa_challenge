
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> prefix(n);

        unordered_map<int, int> mp;

        prefix[0] = nums[0];

        mp[0] = -1;

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        for (int i = 0; i < n; i++) {

            int remainder = prefix[i] % k;

            if (mp.find(remainder) != mp.end()) {
                if (i - mp[remainder] >= 2) {
                    return true;
                }
            }
            else {
                mp[remainder] = i;
            }
        }

        return false;
    }
};
