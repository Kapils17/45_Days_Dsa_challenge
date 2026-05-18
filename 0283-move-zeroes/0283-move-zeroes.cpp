class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int first = 0;

        for(int second = 0; second < nums.size(); second++){

            if(nums[second] != 0){
            swap(nums[first], nums[second]);
                first++;
            }
        }
    }
};