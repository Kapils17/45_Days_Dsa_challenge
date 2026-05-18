class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    int n = nums.size();
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        
        int newindex = (i + k) % n;

        v[newindex] = nums[i];
    }

    nums = v;
    }
};