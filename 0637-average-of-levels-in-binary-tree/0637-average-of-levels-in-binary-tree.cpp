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
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
             int size = q.size();
             long long sum = 0;
             long count = 0;

             for(int i = 0; i < size; i++){
                TreeNode*  node = q.front();
                q.pop();

                sum = sum + node -> val;
                count++;

                if( node -> left){
                    q.push(node -> left);
                }

                if(node -> right){
                    q.push(node -> right);
                }}

                double avg = (double)sum / count;

                ans.push_back(avg);              

             }
        

        return ans;
    }
};