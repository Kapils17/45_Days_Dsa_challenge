class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<int> v;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(isalnum(ch)){
                v.push_back(tolower(ch));
            }
        }

        int i = 0;
        int j = v.size() - 1;

        while(i <= j){
            if(v[i] != v[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;

    }
};