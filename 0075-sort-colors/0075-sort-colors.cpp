class Solution {
public:
    void sortColors(vector<int>& nums) {
     
      map<int , int > mp; 

      for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
      }
     
     int index = 0;
     while(mp[0]){
        nums[index++] = 0;
        mp[0]--;
     }

      while(mp[1]){
        nums[index++] = 1;
        mp[1]--;
     }

      while(mp[2]){
        nums[index++] = 2;
        mp[2]--;
     }


        
    }
};