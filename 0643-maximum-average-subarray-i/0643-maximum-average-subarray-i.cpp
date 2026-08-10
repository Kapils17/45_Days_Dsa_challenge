class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double maxavg = 0.0;
        double avg = 0.0;
        double sum = 0.0;

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }

        avg = sum / k;
        maxavg = avg;

        avg = 0;
        

        for(int i = k; i < nums.size(); i++){
            
            sum = sum - nums[i-k];
            sum = sum + nums[i];

            avg = sum / k;
            maxavg = max(avg , maxavg);

            avg = 0;

        }
     return maxavg;
    }
};