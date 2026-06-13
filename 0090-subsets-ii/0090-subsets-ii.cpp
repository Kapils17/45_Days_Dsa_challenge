class Solution {
public:

    void solve(vector<int>& nums, vector<int>& temp,
               vector<vector<int>>& ans, int i) {

        if(i == nums.size()) {
            ans.push_back(temp);
            return;
        }


        temp.push_back(nums[i]);
        solve(nums, temp, ans, i + 1);

        temp.pop_back();

 
        int index = i + 1;
        while(index < nums.size() && nums[index] == nums[index - 1]) {
            index++;
        }

        solve(nums, temp, ans, index);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> temp;
        vector<vector<int>> ans;

        solve(nums, temp, ans, 0);

        return ans;
    }
};