class Solution {
public:
     
    void solve(vector<int> nums , vector<vector<int>> &ans ,  int size , int i , vector<int> temp){
        
          
          //base case 
          if(i == size){
            ans.push_back(temp);
            return;
          }

          //call for include 
          temp.push_back(nums[i]);
          solve(nums , ans , size , i+1 , temp);

          //call for exclude
          temp.pop_back();
           solve(nums , ans , size , i+1 , temp);


    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         int n = nums.size();
         vector<int> temp;
         int i = 0;

         solve(nums , ans , n , i , temp);

         return ans;
    }
};