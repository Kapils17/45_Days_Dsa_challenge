class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        vector<int> arr(nums.size() + 1, 0);


        int n = nums.size();

        for(int i = 0; i < n; i++){
            arr[nums[i]]++;
        }

        for(int i = 0; i <= n; i++){
            if(arr[i] == 0){
                return i;
            }
        }

        return -1;

    }
};