class Solution {
public:
    
    void merge(vector<int>& nums , int start , int end , int mid){
       vector<int> temp;
       int i = start;
       int j = mid + 1;

       while(i <= mid && j <= end){
         
         if(nums[i] <= nums[j]){
          temp.push_back(nums[i]);
          i++;
         }
         else{
           temp.push_back(nums[j]);
           j++;
         }
         }

         while(i <= mid){
            temp.push_back(nums[i]);
            i++;
         }


         while(j <= end){
            temp.push_back(nums[j]);
            j++;
         }

         for(int idx = 0; idx < temp.size(); idx++){
          nums[idx + start] = temp[idx];
         }
    }

    void mergesort(vector<int>& nums , int start , int end ){
        
        if(start >= end){
            return;
        }

        int mid = start + (end - start)/2;

        mergesort(nums , start , mid);
        mergesort(nums , mid + 1, end);

        merge(nums , start , end , mid);

    }

    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        mergesort(nums , start , end);

        return nums;
    }
};