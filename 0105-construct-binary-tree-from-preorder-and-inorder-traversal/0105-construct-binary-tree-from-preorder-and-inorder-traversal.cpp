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
    
    TreeNode* create(vector<int> &pre , vector<int> ino , int n , int &index , int start , int end , unordered_map<int , int> &mp){
        //base case 

        if(index >= n || start > end){
            return NULL;
        }

        TreeNode* root = new TreeNode(pre[index]);
        index++;

        int posi = mp[root -> val];

        root -> left = create(pre , ino , n , index , start , posi - 1 , mp);
        root -> right = create(pre , ino , n , index , posi + 1 , end , mp);

        return root;


    }
   
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size();
        int preindex = 0;
        int instart = 0;
        int inend = n - 1;

        unordered_map<int , int> mp;

        for(int i = 0; i < n; i++){
            mp[inorder[i]] = i;
        }

        TreeNode* root = create(preorder , inorder , n , preindex , instart , inend , mp);
        return root;
        
    }
};