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
     
    void inorder(TreeNode* root , vector<int> &inval){
        if(root == NULL){
            return;
        }

        inorder(root -> left , inval);
        inval.push_back(root -> val);
        inorder(root -> right , inval);
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> inval;
        inorder(root , inval);
         
        TreeNode* newroot = new TreeNode(inval[0]);
        TreeNode* temp = newroot;

        int i = 1;

        while(i < inval.size()){
            temp -> right = new TreeNode(inval[i]);
            temp -> left = NULL;
            temp = temp -> right;
            i++;
        }

        return newroot;
    }
};