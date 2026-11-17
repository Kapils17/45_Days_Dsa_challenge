class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int > mp;

        for(int i : nums){
            mp[i]++;
        }

        if(mp.size() != nums.size()){
            return true;
        }

        return false;
    }
};