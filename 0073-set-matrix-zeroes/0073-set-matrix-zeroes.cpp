class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> rows(row, 0);
        vector<int> cols(col, 0);

        // 1. Find all zeros
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {

                if(matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        // 2. Set marked rows to zero
        for(int i = 0; i < row; i++) {
            if(rows[i] == 1) {
                for(int j = 0; j < col; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // 3. Set marked columns to zero
        for(int j = 0; j < col; j++) {
            if(cols[j] == 1) {
                for(int i = 0; i < row; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};