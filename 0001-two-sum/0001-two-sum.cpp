class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> mp;

        mp[nums[0]] = 0;

        for(int i = 1; i < nums.size(); i++){
            int required = target - nums[i];

            if(mp.find(required) != mp.end()){
                return {i , mp[required]};
            }

            mp[nums[i]] = i;
        }

        return {};

    }
};