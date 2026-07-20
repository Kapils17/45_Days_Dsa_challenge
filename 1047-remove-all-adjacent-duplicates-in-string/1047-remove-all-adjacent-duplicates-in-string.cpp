class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        string ans = "";
        
        if(s.length() == 1){
            return s;
        }

        st.push(s[0]);
        
        int i = 1;
        while(i != s.length()){
 
         if (!st.empty() && st.top() == s[i]){
            st.pop();
            i++;
         }else{
            st.push(s[i]);
            i++;
         }
           

        }
      
       while(!st.empty()){
        ans += st.top();
        st.pop();
       }

       reverse(ans.begin() , ans.end());

       return ans;
      
    }
};