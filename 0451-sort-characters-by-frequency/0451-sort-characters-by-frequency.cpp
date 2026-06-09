class Solution {
public:
    string frequencySort(string s) {
           unordered_map<char ,int> mp;
           string ans = "";

           for(int i = 0 ; i < s.length() ; i++){
             mp[s[i]]++;
           }
         
        for(int f = s.length(); f >= 1; f--) {
        for(auto it : mp) {
            if(it.second == f) {
                ans.append(f, it.first);
            }
        }
    } 

    return ans;

      }
};