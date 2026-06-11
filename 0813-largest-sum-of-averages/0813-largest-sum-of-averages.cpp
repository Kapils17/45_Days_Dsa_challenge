class Solution {
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        int n = nums.size();

     vector<double> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        vector<vector<double>> dp(n + 1, vector<double>(k + 1, 0));

     for (int i = 1; i <= n; i++) {
            dp[i][1] = prefix[i] / i;
        }

        for (int groups = 2; groups <= k; groups++) {
            for (int i = groups; i <= n; i++) {
                for (int j = groups - 1; j < i; j++) {
                  dp[i][groups] = max(
                        dp[i][groups],
                        dp[j][groups - 1] +
                        (prefix[i] - prefix[j]) / (i - j)
                    );
                }
            }
        }

        return dp[n][k];
    }
};