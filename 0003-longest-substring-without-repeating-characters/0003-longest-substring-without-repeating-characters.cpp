class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0;
        int right = 0;

        if(s.length() == 0){
            return 0;
        }

        int maxlength = 1;

        unordered_map<char , int> freq;

        for(right = 0; right < s.length(); right++){
           freq[s[right]]++;

           while(freq[s[right]] > 1){
            freq[s[left]]--;
            left++;
           }

           int length = right - left + 1;

           maxlength = max(length , maxlength);

        }
  return maxlength;
    }
};