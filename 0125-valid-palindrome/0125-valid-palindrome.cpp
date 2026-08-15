class Solution {
public:
    bool isPalindrome(string s) {
         
         string ans = "";
         int len = s.length();

         for(int i = 0; i < len; i++){
            char ch = s[i];

            if(isalnum(ch)){
                ans.push_back(tolower(ch));
            }
         }
         
         int i = 0;
         int j = ans.length() - 1;
         while(i < j){
            if(ans[i] != ans[j]){
                return false;
            }

            i++;
            j--;
         }

         return true;

    }
};