class Solution {
public:

   void uniquesubsets(vector<int> nums , vector<int> &temp,  vector<vector<int>> &ans , int i){
           
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        uniquesubsets(nums , temp , ans , i+1);
 
        temp.pop_back();
        
        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }
   
        uniquesubsets(nums , temp , ans , idx);
 
  }
   
   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     

        vector<int> temp;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        uniquesubsets(nums, temp, ans, 0);

        return ans;


    }
};