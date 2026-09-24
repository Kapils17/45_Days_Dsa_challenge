class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++){
           int n = nums[i];
           int digitsum = 0;

           while(n > 0){
            int digit = n % 10;
            digitsum += digit;
            n = n / 10;
           } 

           if(digitsum == i){
            return i;
           }
           
        }

        return -1;
    }
};