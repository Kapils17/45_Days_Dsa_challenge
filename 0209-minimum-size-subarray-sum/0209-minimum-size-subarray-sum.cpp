class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left = 0;
        int sum = 0;
        int minlen = INT_MAX;

        for(int right = 0; right < nums.size(); right++){
           
           sum = sum + nums[right];

           while(sum >= target){
            minlen = min(minlen , right - left + 1 );
            sum = sum - nums[left];
            left++;
           }

        }


        if(minlen == INT_MAX){
            return 0;
        }

        return minlen;

    }
};