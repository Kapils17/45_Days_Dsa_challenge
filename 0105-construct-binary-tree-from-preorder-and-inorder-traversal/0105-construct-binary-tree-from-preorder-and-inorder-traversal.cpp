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

    int findposi(vector<int> ino , int n , int element){
        for(int i = 0; i < n; i++){
            if(ino[i] == element){
                return i;
            }
        }

        return -1;
    }
    
    TreeNode* create(vector<int> pre , vector<int> ino , int n , int &index , int start , int end){
        //base case 

        if(index >= n || start > end){
            return NULL;
        }

        TreeNode* root = new TreeNode(pre[index]);
        index++;

        int posi = findposi(ino , n , root -> val);

        root -> left = create(pre , ino , n , index , start , posi - 1);
        root -> right = create(pre , ino , n , index , posi + 1 , end);

        return root;


    }
   
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size();
        int preindex = 0;
        int instart = 0;
        int inend = n - 1;

        TreeNode* root = create(preorder , inorder , n , preindex , instart , inend);
        return root;
        
    }
};