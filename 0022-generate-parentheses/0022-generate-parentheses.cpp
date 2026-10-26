class Solution {
public:
      
    void generate(int n , int open , int close , vector<string>& ans , string &temp){
     if(open == n && close == n){
        ans.push_back(temp);
        return;
     }

     if(open < n){
        temp.push_back('(');
        generate(n , open + 1 , close , ans , temp);
        temp.pop_back();
     }
     if(close < open){
        temp.push_back(')');
        generate(n , open , close + 1 , ans , temp);
        temp.pop_back();
     }
    }
   
    vector<string> generateParenthesis(int n) {
        int openbracket = 0;
        int closebracket = 0;

        vector<string> ans;
        string temp = "";

        generate(n , openbracket , closebracket , ans , temp);

        return ans;

    }
};