class Solution {
public:

  void solve(int n , int openBracket, int closeBracket ,vector<string> &ans , string &temp){
      
      

      if(openBracket == n && closeBracket == n){
        ans.push_back(temp);
        return;
      }
      
      if(openBracket < n){
        temp.push_back('(');
        solve(n , openBracket + 1 , closeBracket , ans , temp);
        temp.pop_back();
      }

      if(closeBracket < openBracket){
        temp.push_back(')');
        solve(n , openBracket , closeBracket + 1, ans , temp);
        temp.pop_back();
      }

  }

     
    vector<string> generateParenthesis(int n) {
        int openBracket = 0;
        int closeBracket = 0;
        vector<string> ans;
        string temp = "";

        solve(n , openBracket , closeBracket , ans , temp);

        return ans;
        

        
    }
};