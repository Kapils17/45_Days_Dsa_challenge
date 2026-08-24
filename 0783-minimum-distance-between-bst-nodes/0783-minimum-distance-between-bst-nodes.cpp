/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void getvalue(TreeNode* root , vector<int> &values){
        
        if(root == NULL){
            return; 
        }

        values.push_back(root -> val);

        getvalue(root -> left , values);
        getvalue(root -> right , values);
        
}

class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> values;
        getvalue(root , values);

        int mini = INT_MAX;

        
        for(int i = 0; i < values.size(); i++){
            for(int j = i + 1 ; j < values.size(); j++){
                int diff = abs(values[j] - values[i]);
                mini = min(mini , diff);
            }
        }

        return mini;

        
      
    }
};