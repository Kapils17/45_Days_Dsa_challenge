class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end());

        int n = s.length();


        string ans = "";
        string word = "";

        for(int i = 0; i < n; i++){

            while(i < n && s[i] != ' '){
                word = word + s[i];
                i++;
            }


         reverse(word.begin() , word.end());

         if(word.length() > 0){
            ans = ans + " "+ word;
            word = "";
         }

         

        }

        return ans.substr(1);
    }
};