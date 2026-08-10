class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        
     int sum = 0;
     int avg = 0;
     int count = 0;

     for(int i = 0; i < k; i++){
        sum = sum + nums[i];
     }

     avg = sum / k;

     if(avg >= threshold){
        count++;
     }

     for(int i = k; i < nums.size(); i++){
        sum = sum - nums[i - k];
        sum = sum + nums[i];

        avg = sum / k;

        if(avg >= threshold){
            count++;
        }

     }

     return count;


    }
};