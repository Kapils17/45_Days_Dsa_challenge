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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        bool lefttoright = true;
       
        if(root == NULL){
            return ans;
        }

        q.push(root);

        while(!q.empty()){
            int size = q.size();

            vector<int> subans;

            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();

                subans.push_back(temp -> val);

                if(temp -> left){
                    q.push(temp -> left);
                }

                if(temp -> right){
                    q.push(temp -> right);
                }
            }

             if(lefttoright){
                ans.push_back(subans);
            }else{
                reverse(subans.begin() , subans.end());
                ans.push_back(subans);
            }

            lefttoright = !lefttoright;

           
        }


     return ans;

    }
};