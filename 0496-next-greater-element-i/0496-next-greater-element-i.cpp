class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
      vector<int> ans(nums1.size());

      stack<int> st;

      unordered_map<int , int> mp;

      for(int j = nums2.size()-1 ; j >= 0 ; j-- ){
        while(!st.empty() && st.top() <= nums2[j]){
           st.pop();
        }

        if(st.empty()){
            mp[nums2[j]] = -1;
        } 
        else{
            mp[nums2[j]] = st.top();
        }
        
       st.push(nums2[j]);
       }

       for(int i = 0; i < nums1.size() ; i++){
            
          
        ans[i] = mp[nums1[i]];
 
            
       }

       return ans;
    }
};