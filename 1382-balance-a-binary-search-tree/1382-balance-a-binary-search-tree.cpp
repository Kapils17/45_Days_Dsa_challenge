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
    
    void inorder(TreeNode* root , vector<int> &inVal){
        if(root == NULL){
            return;
        }

        inorder(root -> left , inVal);
        inVal.push_back(root -> val);
        inorder(root -> right , inVal);
    }

    TreeNode* create(int s , int e , vector<int> &inVal){

      if(s > e){
        return NULL;
      }
      
      int mid = (s + e) / 2;

      TreeNode* newNode = new TreeNode(inVal[mid]);

      newNode -> left = create(s , mid - 1 , inVal);
      newNode -> right = create(mid + 1 , e , inVal);

      return newNode;
      
    }


   
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inVal;
        inorder(root , inVal);

        int s = 0;
        int e = inVal.size() - 1;

        TreeNode* ans = create(s , e , inVal);

        return ans;


    }
};