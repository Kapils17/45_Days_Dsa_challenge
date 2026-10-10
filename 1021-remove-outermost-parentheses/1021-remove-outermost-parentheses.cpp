class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int count = 0;
        string ans = "";

        for(int i = 0; i < n; i++){
          char ch = s[i];

          if(ch == '('){
            count ++;

            if(count > 1){
                ans.push_back(ch);
            }
          }else{
            count --;

            if(count > 0){
                ans.push_back(ch);
            }
          }
        }

        return ans;
    }
};