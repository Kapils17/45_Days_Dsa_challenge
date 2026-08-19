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

int calheight(TreeNode* root){
  
  if(root == NULL){
    return 0;
  }

  int left = calheight(root -> left);
  int right = calheight(root -> right);

  int height = max(left , right) + 1;

  return height;

}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
       int ans = calheight(root);
        
       return ans;
    }
};