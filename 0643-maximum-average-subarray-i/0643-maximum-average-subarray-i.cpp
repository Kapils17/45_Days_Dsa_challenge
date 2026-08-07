class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxans = sum / k;

        for (int i = k; i < nums.size(); i++) {

            sum += nums[i];
            sum -= nums[i - k];

            maxans = max(maxans, sum / k);
        }

        return maxans;
    }
};