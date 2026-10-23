class Solution {
public:
    
    void solve(string digit , vector<string> &ans , string &temp ,int index , int n , unordered_map<int , string> &mp){
       if(index == n){
        ans.push_back(temp);
        return;
       }

       int number = digit[index] - '0';
       string allowchoices = mp[number];

       for(int i = 0; i < allowchoices.size(); i++){
            temp.push_back(allowchoices[i]);
            solve(digit , ans , temp , index + 1 , n , mp);
            temp.pop_back();
       }

    }
    
    vector<string> letterCombinations(string digits) {
        unordered_map<int , string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        vector<string> ans;
        string temp = "";
        int n = digits.size();

        solve(digits , ans , temp , 0 , n , mp );

        return ans;

    }
};