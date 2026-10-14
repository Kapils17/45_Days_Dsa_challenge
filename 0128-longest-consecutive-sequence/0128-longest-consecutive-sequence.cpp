class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            
        int n = nums.size();

        if(n == 1) return 1;
        if(n == 0) return 0;

        sort(nums.begin() , nums.end());
         
        int count = 1;
        int maxcount = 1;

        for(int i = 0; i < nums.size() - 1; i++){
           
           if(nums[i] == nums[i + 1]){
            continue;
           }

           if(nums[i+1] - nums[i] == 1){
            count = count + 1;
            maxcount = max(count , maxcount);
            }else{
                count = 1;
            }

          
        }

        return maxcount ;

    }
};