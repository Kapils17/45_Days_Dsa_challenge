class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(),
       [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
       });
     
      int endingtime = intervals[0][1]; 
      int removalcount = 0;

      for(int i = 0; i < intervals.size(); i++){
        if(intervals[i][0] < endingtime){
          removalcount++;
        }
        else{
            endingtime = intervals[i][1];
        }
      }

      return removalcount - 1 ;

    }
};