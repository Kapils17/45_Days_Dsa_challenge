class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> mp;

        int len1 = s.length();
        int len2 = t.length();

        if(len1 != len2){
            return false;
        }

        for(int i = 0; i < len1; i++){
            char ch = s[i];

            mp[ch]++;

        }

        for(int i = 0; i < len2; i++){
            char ch = t[i];

            mp[ch]--;
        }

        for(auto it : mp){
            if(it.second > 0){
                return false;
            }
        }

        return true;
    }
};