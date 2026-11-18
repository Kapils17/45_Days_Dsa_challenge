class Solution {
public:
    bool isPalindrome(string s) {
       
       string ans = "";
       for(int i = 0; i < s.length(); i++){
         if(isalnum(s[i])){
            ans.push_back(tolower(s[i]));
         }
       }

       int i = 0;
       int j = ans.length() - 1;

       while(i <= j){
        if(ans[i] != ans[j]){
            return false;
        }
          i++;
          j--;
       
       }

        return true;

    }
};