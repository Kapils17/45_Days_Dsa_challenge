class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0;
        int leftsum = 0;

        for(int i = 0; i < nums.size(); i++) { 
            sum = sum + nums[i];
            }

        for(int j = 0; j < nums.size(); j++){
           
           if(leftsum == sum - leftsum - nums[j]){
            return j;
           }
          leftsum += nums[j];
        }
        return -1;

    }
};