class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k <= 1){
            return 0;
        }
        
        int product = 1;
        int left = 0;
        int right = 0;
        int count = 0;

        for(right = 0; right < nums.size(); right++){
            product = product * nums[right];

            while(product >= k){
                product /= nums[left];
                left++;
            }

            count += right - left + 1;
        }
    return count;
    }
};