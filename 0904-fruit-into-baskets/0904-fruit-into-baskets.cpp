class Solution {
public:
    int totalFruit(vector<int>& nums) {
        
        unordered_map<int , int> mp;

        int left = 0;
        int right = 0;
        int count = 0;
        int maxcount = 0;

        for(right = 0; right < nums.size(); right++){
          
           mp[nums[right]]++;

           while(mp.size() > 2){
            mp[nums[left]]--;

           if(mp[nums[left]] == 0){
           mp.erase(nums[left]);
            } 
          
            left++;
           }

           int count = right - left + 1;
           maxcount = max(maxcount , count);
 
        }

       

        return maxcount;

    }
};