class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    vector<int> buildLPS(const string& evil) {
        int m = evil.size();
        vector<int> lps(m, 0);

        for (int i = 1, len = 0; i < m;) {
            if (evil[i] == evil[len]) {
                lps[i++] = ++len;
            } else if (len) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
        return lps;
    }

    int dp[501][51][2][2];

    int solve(int pos, int matched, bool low, bool high,
              string& s1, string& s2, string& evil,
              vector<int>& lps) {

        if (matched == evil.size()) return 0;
        if (pos == s1.size()) return 1;

        int& ans = dp[pos][matched][low][high];
        if (ans != -1) return ans;

        ans = 0;

        char from = low ? s1[pos] : 'a';
        char to = high ? s2[pos] : 'z';

        for (char ch = from; ch <= to; ch++) {
            int j = matched;

            while (j > 0 && evil[j] != ch)
                j = lps[j - 1];

            if (evil[j] == ch) j++;

            ans = (ans + solve(
                pos + 1,
                j,
                low && (ch == from),
                high && (ch == to),
                s1, s2, evil, lps
            )) % MOD;
        }

        return ans;
    }

    int findGoodStrings(int n, string s1, string s2, string evil) {
        memset(dp, -1, sizeof(dp));
        vector<int> lps = buildLPS(evil);

        return solve(0, 0, true, true, s1, s2, evil, lps);
    }
};