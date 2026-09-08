class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        int ans = 0;

        while(!q.empty()) {
            int size = q.size();

            // Index of first node at current level
            long long minIndex = q.front().second;

            long long first = 0;
            long long last = 0;

            for(int i = 0; i < size; i++) {

                TreeNode* node = q.front().first;

                // Normalize index
                long long index = q.front().second - minIndex;

                q.pop();

                if(i == 0) first = index;
                if(i == size - 1) last = index;

                if(node->left) {
                    q.push({node->left, 2 * index + 1});
                }

                if(node->right) {
                    q.push({node->right, 2 * index + 2});
                }
            }

            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
};