class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {


    vector<int> ans;

    int srow = 0;
    int scol = 0;
    int erow = mat.size() - 1;
    int ecol = mat[0].size() - 1;

    while(srow <= erow && scol <= ecol){

    for(int i = scol; i <= ecol ; i++){
        ans.push_back(mat[srow][i]);
    }


    for(int i = srow + 1; i <= erow; i++){
        ans.push_back(mat[i][ecol]);
    }
    
    if(srow < erow){
    for(int i = ecol - 1; i >= scol; i--){
          ans.push_back(mat[erow][i]);
    }
    }
    
    if(scol < ecol){
    for(int i = erow - 1; i > srow; i--){
        ans.push_back(mat[i][scol]);
    }}

    srow++;
    scol++;
    erow--;
    ecol--;





    }
    
    return ans;
    }
   
};