class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
       

       int pivot = -1;

       for(int i = n-2 ; i >= 0; i--){
            if(nums[i] < nums[i + 1] ){
                 pivot = i;
                 break;
            }
       }

       if(pivot != -1){
          
          for(int j = n-1 ; j > pivot ; j--){
            if(nums[j] > nums[pivot]){
                swap(nums[j], nums[pivot]);
                break;
            } 
          }

       }

       int p1 = pivot + 1;
       int p2 = n-1;

       while(p1 <= p2){
        swap(nums[p1], nums[p2]);
        p1++;
        p2--;
       }
    }


        
};