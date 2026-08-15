class Solution {
public:
    bool isPalindrome(string s) {

    if(s.empty()){
        return false;
    }

   string ans = "";

   for(int i = 0; i < s.length(); i++){
    char ch = s[i];
    
    if(isalnum(ch)){
       ch = tolower(ch);
       
    ans.push_back(ch);
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