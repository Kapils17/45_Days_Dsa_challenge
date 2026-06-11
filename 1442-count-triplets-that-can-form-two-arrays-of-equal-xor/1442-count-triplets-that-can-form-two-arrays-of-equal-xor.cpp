class Solution {
public:
    int countTriplets(vector<int>& arr) {
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int xr = 0;

        for (int k = i; k < n; k++) {
                xr ^= arr[k];

                if (xr == 0) {
                    ans += (k - i);
                }
            }
        }

        return ans;
    }
};