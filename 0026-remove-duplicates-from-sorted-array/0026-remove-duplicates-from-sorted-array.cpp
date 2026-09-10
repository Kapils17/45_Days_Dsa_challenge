class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

       map<int , int> mp;

       for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
       }
      
     int index = 0;
     int count = 0;

     for(auto it: mp){
        nums[index++] = it.first;
        count++;
     }

     return count;

    }
};