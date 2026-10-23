class Solution {
public:
    
    void solve(vector<int> &nums , vector<vector<int>> &subsets , vector<int> &subset , int idx , int n){
         if(idx == n){
            subsets.push_back(subset);
            return;
         }

         subset.push_back(nums[idx]);
         solve(nums , subsets , subset , idx + 1 , n);

         subset.pop_back();
         solve(nums , subsets , subset , idx + 1 , n);



    }
   
    int subsetXORSum(vector<int>& nums) {
           
         int n = nums.size();
         int idx = 0;

         vector<vector<int>> subsets;
         vector<int> subset;

         solve(nums , subsets , subset , idx , n);

         int sum = 0;

        for(int i = 0; i < subsets.size(); i++) {
            
            int x = 0;

            for(int j = 0; j < subsets[i].size(); j++) {
                x ^= subsets[i][j];
            }

            sum += x;
        }

        return sum;
         

    }
};