class Solution {
public:

    void verticalTraversalHelper(TreeNode* root, int row, int col,
                                 map<int, vector<pair<int, int>>>& mp) {

        if (root == NULL) {
            return;
        }

        mp[col].push_back({row, root->val});

        verticalTraversalHelper(root->left, row + 1, col - 1, mp);
        verticalTraversalHelper(root->right, row + 1, col + 1, mp);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, vector<pair<int, int>>> mp;

        vector<vector<int>> ans;

        verticalTraversalHelper(root, 0, 0, mp);

        for (auto &it : mp) {

            auto &nodes = it.second;

            sort(nodes.begin(), nodes.end());

            vector<int> temp;

            for (auto &node : nodes) {
                temp.push_back(node.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};