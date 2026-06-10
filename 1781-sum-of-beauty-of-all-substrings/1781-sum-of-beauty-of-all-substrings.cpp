class Solution {
public:

    int calsum(string sub){
      
      vector<int> v(26,0);

      for(int i = 0; i < sub.length() ; i++){
        v[sub[i] - 'a']++;
        }

        int maxi = 0;
        int mini = INT_MAX;

        for(int i = 0; i < 26; i++){
            if(v[i] > 0){
                maxi = max(v[i] , maxi);
                mini = min(v[i] , mini);
            }
        }

        return maxi - mini;

    }

    int beautySum(string s) {
         int ans = 0;
        int n = s.length();

        for(int i = 0; i < n; i++) {

            string sub = "";

            for(int j = i; j < n; j++) {
                sub.push_back(s[j]);
                ans += calsum(sub);
            }
        }
      return ans ;
    }
};