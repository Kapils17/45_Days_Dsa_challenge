class Solution {
public:
    bool match(string &q, string &pattern) {
        int j = 0;

        for (char c : q) {
            if (j < pattern.size() && c == pattern[j]) {
                j++;
            } 
            else if (isupper(c)) {
                return false;
            }
        }

        return j == pattern.size();
    }

    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;

        for (auto &q : queries) {
            ans.push_back(match(q, pattern));
        }

        return ans;
    }
};