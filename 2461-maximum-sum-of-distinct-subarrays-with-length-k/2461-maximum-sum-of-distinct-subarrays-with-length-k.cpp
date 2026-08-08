class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        long long sum = 0;
        long long maxsum = 0;

        unordered_map<int , int> mp;

       for(int i = 0; i < k; i++){
              sum = sum + nums[i];
              mp[nums[i]]++;
        }

        if(mp.size() == k){
             maxsum = sum;
        }
      
        for(int i = k ; i < nums.size(); i++){
            sum = sum - nums[i - k];
            mp[nums[i-k]]--;

             if(mp[nums[i-k]] == 0){
                mp.erase(nums[i-k]);
            }
            
            sum = sum + nums[i];
            mp[nums[i]]++;


            if(mp.size() == k){
             maxsum = max(sum , maxsum);
            }
            
        }

        return maxsum;

    }
};