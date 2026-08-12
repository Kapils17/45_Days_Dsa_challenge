class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> ans(rows, vector<int>(cols, 0));

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                int sum = 0;

                for(int r = i - k; r <= i + k; r++) {

                    for(int c = j - k; c <= j + k; c++) {

                        if(r >= 0 && r < rows && 
                           c >= 0 && c < cols) {
                            
                            sum += mat[r][c];
                        }
                    }
                }

                ans[i][j] = sum;
            }
        }

        return ans;
    }
};