class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        long long sum = 0;
        unordered_map<int , int> mp;
        long long maxsum = 0;
        
        //storing the sum of the first window of size k
        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
            mp[nums[i]]++;
        }

        if(mp.size() == k){
            maxsum = max(sum , maxsum);
        }

        int low = 0;
        int high = k - 1;

        while(high + 1 < nums.size()){
            low ++;
            high ++;
            
            if(mp[nums[low-1]] == 1){
               mp.erase(nums[low-1]);
            }else{
                mp[nums[low - 1]]--;
            }
          
            mp[nums[high]]++;

            sum = sum - nums[low - 1];
            sum = sum + nums[high];

            if(mp.size() == k){
                maxsum = max(sum , maxsum);
            }
        }

        return maxsum;



    }
};