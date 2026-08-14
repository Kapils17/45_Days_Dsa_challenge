class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // if(nums.size() == 1 && k != nums[0] ){
        //     return 0;
        // }

        unordered_map<int , int> mp;
        int count = 0;

        vector<int> presum(nums.size());

        presum[0] = nums[0];
        int sum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            
            sum = sum + nums[i];

            presum[i] = sum;

        }

       
        mp[0] = 1;

        for(int j = 0; j < presum.size(); j++) {

            int rem = presum[j] % k;

            if(rem < 0) {
                rem += k;
            }

            if(mp.find(rem) != mp.end()) {
                count += mp[rem];
            }

            mp[rem]++;
        }

        return count;
    }
};