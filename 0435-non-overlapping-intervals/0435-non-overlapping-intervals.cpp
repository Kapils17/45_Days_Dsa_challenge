class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(),
       [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
       });

       vector<vector<int>> ans;
       int n = intervals.size();

       for(int i = 0; i < n; i++){
            if(ans.empty() || ans.back()[1] <= intervals[i][0]){
                ans.push_back(intervals[i]);
            }
       }

       return n - ans.size();

    }
};