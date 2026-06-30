class Solution {
public:
    int totalSteps(vector<int>& nums) {

        int n = nums.size();

        stack<pair<int,int>> st;
        int ans = 0;

        for(int i=n-1;i>=0;i--){

            int steps = 0;

            while(!st.empty() && nums[i] > st.top().first){

                steps = max(steps + 1, st.top().second);
                st.pop();
            }

            ans = max(ans, steps);
            st.push({nums[i], steps});
        }

        return ans;
    }
};