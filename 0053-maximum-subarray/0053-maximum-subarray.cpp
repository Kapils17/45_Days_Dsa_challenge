class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    //Solving this problem by using the Kadane algorithm - Optimized 

    int n = nums.size();

    int current_sum = 0;
    int Max_sum = INT_MIN;

    for(int i = 0; i < n; i++){

        current_sum += nums[i];

        Max_sum = max(current_sum , Max_sum);

        if(current_sum < 0){
            current_sum = 0;
        }
    }
       return Max_sum;
     }
};