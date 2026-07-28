class Solution {
public:
    string smallestPalindrome(string s) {

        int freq[26] = {0};

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string half = "";
        string mid = "";

        for (int i = 0; i < 26; i++) {

            for (int j = 0; j < freq[i] / 2; j++) {
                half += char('a' + i);
            }

            if (freq[i] % 2 != 0) {
                mid = char('a' + i);
            }
        }

     
        string right = half;
        reverse(right.begin(), right.end());

        return half + mid + right;
    }
};