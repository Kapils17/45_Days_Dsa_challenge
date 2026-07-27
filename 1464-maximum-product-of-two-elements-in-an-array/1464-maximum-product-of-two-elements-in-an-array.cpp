class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for(int n : nums){
            if(n > max1){
                max2  = max1;
                max1 = n;
            }

            else if(n > max2){
                max2 = n;
            }

        }

        int pro1 = max1 - 1;
        int pro2 = max2 - 1;

        return pro1 * pro2;
    }
};