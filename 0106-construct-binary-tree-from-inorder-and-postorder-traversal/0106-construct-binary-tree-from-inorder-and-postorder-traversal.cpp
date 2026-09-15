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
     
    TreeNode* create( vector<int> &postorder , int &index , int start , int end  , unordered_map<int , int> &mp){
        
          if(index < 0 || start > end){
            return NULL;
          }

         TreeNode* root = new TreeNode(postorder[index]);
         index--;

         int posi = mp[root -> val];
         
          root -> right = create(postorder , index , posi + 1 , end  , mp);

         root -> left = create( postorder , index , start , posi - 1 , mp);
        
         return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int ,  int> mp;


        int n = inorder.size();
        for(int i = 0; i < n ; i++){
            mp[inorder[i]] = i;
        }

        int index = n - 1;
        int instart = 0;
        int inend = n - 1;

        TreeNode* root = create( postorder , index , instart , inend, mp );

        return root;

      

    }
};