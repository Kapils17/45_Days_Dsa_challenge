class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {

        stack<int> st;
        st.push(INT_MAX);

        int ans=0;

        for(int x:arr){

            while(st.top()<=x){

                int mid=st.top();
                st.pop();

                ans+=mid*min(st.top(),x);
            }

            st.push(x);
        }

        while(st.size()>2){

            int x=st.top();
            st.pop();

            ans+=x*st.top();
        }

        return ans;
    }
};