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
        
        vector<vector<int>> ans;
        vector<int> temp;

        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> qq;

        qq.push(root);
        qq.push(NULL);

        while(!qq.empty()){
            TreeNode* t = qq.front();
            qq.pop();

            if(t == NULL ){
                 
                 ans.push_back(temp);
                 temp.clear();
                 

                 if(!qq.empty()){
                  qq.push(NULL);
                 }
            }

            if(t != NULL){
                temp.push_back(t -> val);

                if(t -> left){
                    qq.push(t -> left);
                }

                if(t -> right){
                    qq.push(t-> right);
                }
            }


        }

        return ans;
    }
};