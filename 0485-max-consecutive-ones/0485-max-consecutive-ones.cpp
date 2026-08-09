class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxi = 0;
        int occur = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                occur = occur + 1;
                maxi = max(occur , maxi);
                
            }else{
               occur = 0;
            }

          
        

            
        }

        return maxi;

    }
};