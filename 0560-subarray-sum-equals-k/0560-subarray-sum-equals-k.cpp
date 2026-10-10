class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int count = 0;

        vector<int> prefix(nums.size());
        prefix[0] = nums[0];

        for(int i = 1 ; i < prefix.size(); i++){
            prefix[i] = prefix[i - 1] + nums[i];
        }

        unordered_map<int , int> mp;

        for(int i = 0; i < prefix.size(); i++){
            if(prefix[i] == k){
                count++;
            }

            int remaining = prefix[i] - k;

            if(mp.find(remaining) != mp.end()){
                count += mp[remaining];
            }

            mp[prefix[i]]++;
        }

        return count;

    }
};