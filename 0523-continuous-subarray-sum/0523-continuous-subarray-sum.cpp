class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        mp[0] = -1;

        int sum = 0;

        for(int j = 0; j < nums.size(); j++) {

            sum += nums[j];

            int remainder = sum % k;

            if(mp.find(remainder) != mp.end()) {

                int previousIndex = mp[remainder];

                if(j - previousIndex >= 2) {
                    return true;
                }
            }
            else {
                
                mp[remainder] = j;
            }
        }

        return false;
    }
};