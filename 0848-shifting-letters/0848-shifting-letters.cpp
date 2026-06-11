class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long shift = 0;

    for (int i = shifts.size() - 1; i >= 0; i--) {
         shift = (shift + shifts[i]) % 26;
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
    }
};