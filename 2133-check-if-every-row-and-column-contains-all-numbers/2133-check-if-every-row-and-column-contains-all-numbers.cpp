class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row ; i++){
            unordered_map<int , int> mp;
            unordered_map<int , int> mp2;
        
            for(int j = 0; j < col; j++){
              mp[matrix[i][j]]++;

              mp2[matrix[j][i]]++;
            }

            if(mp.size() != row){
                return false;
            }

            if(mp2.size() != col){
                return false;
            }
        }

        return true;
    }
};