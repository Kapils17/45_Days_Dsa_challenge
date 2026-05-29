class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      
      int n = nums.size();

      vector<int> ans(n);

      int posindex = 0;
      int negaindex = 1;

      for(int i = 0 ; i < n ; i++){
        if(nums[i] > 0){
            ans[posindex] = nums[i];
            posindex += 2;

        }

        else{
            ans[negaindex] = nums[i];
            negaindex += 2;
        }


      }

 
     return ans;
    }

};