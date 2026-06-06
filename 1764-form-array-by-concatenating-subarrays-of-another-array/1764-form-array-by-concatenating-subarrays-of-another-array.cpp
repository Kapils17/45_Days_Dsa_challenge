class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int i = 0, j = 0;

        while (i < groups.size() && j < nums.size()) {
            int k = 0;

            while (j + k < nums.size() &&
                   k < groups[i].size() &&
                   nums[j + k] == groups[i][k]) {
                k++;
            }

            if (k == groups[i].size()) {
                j += k;
                i++;
            } else {
                j++;
            }
        }

        return i == groups.size();
    }
};