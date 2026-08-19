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

int height(TreeNode* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    return max(left , right) + 1;
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
    if(root == NULL){
        return 0;
    }

    int leftdiameter =  diameterOfBinaryTree(root -> left);
    int rightdiameter = diameterOfBinaryTree(root -> right); 
    int currdiameter = height(root -> left) + height(root -> right) ;

    return max(leftdiameter , max(rightdiameter , currdiameter) );


    

    }
};