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
    vector<vector<int>> levelOrder(TreeNode* root) {
             
      vector<int> sub;
      vector<vector<int>> ans;

      queue<TreeNode*> q;
      
      if(root == NULL){
        return ans;
      }
      
      q.push(root);
      ans.push_back({root -> val});
      q.push(NULL);

      while(!q.empty()){
        
        TreeNode* temp = q.front();
        q.pop();

        if(temp != NULL){
            if(temp -> left){
                q.push(temp -> left);
                sub.push_back(temp -> left ->val);
            }
            if(temp -> right){
                q.push(temp -> right);
                sub.push_back(temp -> right ->val);
            }
           }else{
               
               if(!sub.empty()){
                ans.push_back(sub); 
               }
               
               sub = {};


               if(!q.empty()){
                q.push(NULL);
               }

           }
      }

      return ans;

     

    }
};