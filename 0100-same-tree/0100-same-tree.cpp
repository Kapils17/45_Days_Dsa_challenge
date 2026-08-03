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

void pre1(TreeNode* p , vector<int> &ans1){
    
    if(p == NULL){

        ans1.push_back(-1000000);
        return;
    }

    ans1.push_back(p -> val);


    pre1(p-> left , ans1);
    pre1(p-> right , ans1);

}

void pre2(TreeNode* q , vector<int> &ans2){
 
  if(q == NULL){
    ans2.push_back(-1000000);
    return;
  }

ans2.push_back(q -> val);

 pre2(q -> left , ans2);
 pre2(q -> right , ans2);

}


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
      vector<int> ans1;
      vector<int> ans2;

      pre1(p , ans1);
      pre2(q , ans2);

      if(ans1.size() != ans2.size()){
        return false;
      }

      for(int i = 0; i < ans1.size(); i++){
           
        if(ans1[i] != ans2[i]){
            return false;
        }

      }

      return true;
      
     




    }
};