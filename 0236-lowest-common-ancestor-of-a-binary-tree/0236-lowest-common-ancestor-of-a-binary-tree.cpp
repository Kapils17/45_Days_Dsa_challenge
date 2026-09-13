
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }

        if(root ->val == p -> val || root -> val == q -> val){
            return root;
        }

        TreeNode* leftlca = lowestCommonAncestor(root -> left , p , q);
        TreeNode* rightlca = lowestCommonAncestor(root -> right , p , q);

        if(leftlca != NULL && rightlca != NULL){
            return root ;
        }
        else if(leftlca == NULL && rightlca != NULL){
            return rightlca;
        }
        else{
            return leftlca;
        }

        return root;
    }

};