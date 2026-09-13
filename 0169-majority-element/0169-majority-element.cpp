class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int , int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
          
        int required = nums.size() / 2;

        for(auto it : mp){
            if(it.second > required){
                return it.first;
            }
        }

        return -1;

    }
};