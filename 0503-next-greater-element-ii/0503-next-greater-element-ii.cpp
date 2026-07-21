class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums1) {
   
    vector<int> nums2(nums1.size()*2);
    vector<int> ans(nums1.size());



     
     for(int i = 0; i < nums2.size() ; i++){
        
        nums2[i] = nums1[i % nums1.size()];
     
     }

    for(int i = 0; i < nums2.size()/2 ; i++){
        int next = -1;

        for(int j = i+1; j < nums2.size(); j++){
            if(nums2[j] > nums2[i]){
                next = nums2[j];
                break;
            }
        }
      
        ans[i] = next;
      
    }

    
    return ans;

    }

};