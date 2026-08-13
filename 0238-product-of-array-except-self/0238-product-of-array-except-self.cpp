class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);

        // Prefix product
        int pro = 1;

        for(int i = 0; i < n; i++) {
            prefix[i] = pro;
            pro *= nums[i];
        }

        // Suffix product
        pro = 1;

        for(int i = n - 1; i >= 0; i--) {
            suffix[i] = pro;
            pro *= nums[i];
        }

        // Prefix × Suffix
        for(int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};