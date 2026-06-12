class Solution {
public:
    
    int binarysearch(vector<int> n , int target , int low , int high){
        if(low <= high){
           int mid = (low + high) / 2;

           if(n[mid] == target){
             return mid;
           }

           if(n[mid] > target){
            return binarysearch(n , target , low , mid-1);
           }

           if(n[mid] < target){
            return binarysearch(n , target , mid + 1, high);
           }
        }

        return -1;
    }

    
    int search(vector<int>& nums, int target) {
       
         int low = 0;
         int high = nums.size() - 1;
          
         int index = binarysearch(nums , target , low , high);
         return index;
        

        }
    
};