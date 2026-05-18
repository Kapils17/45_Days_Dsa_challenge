class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    int n = nums.size();
    vector<int> temp(n);

    for(int i = 0 ; i < n ; i++){
           int index = (i + k) % n;

           temp[index] = nums[i];

    }
    nums = temp;

    }
};