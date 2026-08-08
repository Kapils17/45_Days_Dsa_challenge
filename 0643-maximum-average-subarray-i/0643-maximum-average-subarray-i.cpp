class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum = 0.0;
        double avg = 0.0;
        double maxavg = 0.0;

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }

        avg = sum / k;
        maxavg = avg;
   
        for(int i = k; i < nums.size(); i++){
            sum = sum - nums[i - k];
            sum = sum + nums[i];
            avg = sum / k;
            maxavg = max(maxavg , avg);
        }
        

        return maxavg;

    }
};