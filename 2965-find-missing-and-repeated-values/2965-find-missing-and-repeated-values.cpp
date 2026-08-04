class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         
         unordered_map<int , int> freq;
         vector<int> ans;
         vector<int> temp;

         for(int i = 0; i < grid.size(); i++ ){
            for(int j = 0; j < grid[i].size(); j++){
                freq[grid[i][j]]++;

            }
         }

         for(auto it : freq){
            if(it.second == 2){
                ans.push_back(it.first);
                break;
            }
         }

          for (int i = 1; i <= grid.size() * grid.size(); i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
                break;
            }
        }


       
     return ans;
         
    }
};