class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();

        vector<long long> val(nums.begin(), nums.end());
        vector<int> prv(n), nxt(n);
        vector<bool> alive(n, true);

        for (int i = 0; i < n; i++) {
            prv[i] = i - 1;
            nxt[i] = (i + 1 < n ? i + 1 : -1);
        }

        int bad = 0;
        for (int i = 0; i + 1 < n; i++)
            if (val[i] > val[i + 1]) bad++;

        auto removeEdge = [&](int l) {
            if (l != -1 && nxt[l] != -1 && val[l] > val[nxt[l]])
                bad--;
        };

        auto addEdge = [&](int l) {
            if (l != -1 && nxt[l] != -1 && val[l] > val[nxt[l]])
                bad++;
        };

        set<pair<long long, int>> pq;

        for (int i = 0; i + 1 < n; i++)
            pq.insert({val[i] + val[i + 1], i});

        int ans = 0;

        while (bad > 0) {
            auto [sum, i] = *pq.begin();
            pq.erase(pq.begin());

            if (!alive[i]) continue;
            int j = nxt[i];
            if (j == -1 || !alive[j]) continue;
            if (val[i] + val[j] != sum) continue;

            int L = prv[i];
            int R = nxt[j];

            if (L != -1)
                pq.erase({val[L] + val[i], L});
            pq.erase({val[i] + val[j], i});
            if (R != -1)
                pq.erase({val[j] + val[R], j});

            if (L != -1) removeEdge(L);
            removeEdge(i);
            removeEdge(j);

            val[i] += val[j];
            alive[j] = false;

            nxt[i] = R;
            if (R != -1) prv[R] = i;

            if (L != -1) addEdge(L);
            addEdge(i);

            if (L != -1)
                pq.insert({val[L] + val[i], L});
            if (R != -1)
                pq.insert({val[i] + val[R], i});

            ans++;
        }

        return ans;
    }
};