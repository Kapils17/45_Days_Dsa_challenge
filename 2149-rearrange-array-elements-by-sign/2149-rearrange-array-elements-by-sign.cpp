class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
    int n = nums.size();

    vector<int> positive(n/2);
    vector<int> negative(n/2);
    
    int k = 0;
    int l = 0;

    for(int i = 0; i < n; i++){
        
        if(nums[i] > 0){
            positive[k] = nums[i];
            k++;
        }

        if(nums[i] < 0){
            negative[l] = nums[i];
            l++;
        }


    }

    vector<int> ans(n);

    int p1 = 0;
    int p2 = 0;
  

       for(int i = 0; i < n; i++) {

            if(i % 2 == 0) {
                ans[i] = positive[p1];
                p1++;
            }
            else {
                ans[i] = negative[p2];
                p2++;
            }
        }
    
    return ans;
     
      
    }
};