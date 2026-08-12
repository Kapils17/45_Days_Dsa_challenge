class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
         int n = nums.size();
         int count = 0;

         vector<int> prefix(n);
         unordered_map<int , int > mp;
        
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + nums[i]; 
        }

        for(int j = 0; j < n; j++){
            
             if(prefix[j] == k){
                count++;
             }
             
             int first = prefix[j] - k;
             
             if (mp.find(first) != mp.end()) {
             count += mp[first];
             } 

             mp[prefix[j]]++;





        }

        return count;
         
        
    }
};