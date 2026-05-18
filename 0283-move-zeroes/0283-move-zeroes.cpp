class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    int n = nums.size();
    
    int first = 0;
    int second = 0;

    for(int i = 0 ; i < n ; i++){
        
        first = i;
        second = i + 1;

        while(second != n){
            if(nums[first]==0 && nums[second] != 0){
                  swap(nums[first], nums[second]);
                    break;
            }

        
            second++;
        }

    }
    
    }
};