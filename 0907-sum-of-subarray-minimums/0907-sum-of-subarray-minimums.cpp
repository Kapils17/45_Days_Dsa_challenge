class Solution {
public:

    const int mod = 1e9 + 7;

    vector<int> previousSmaller(vector<int> &arr){

        stack<int> st;
        int n = arr.size();
        vector<int> p(n);

        for(int i = 0; i < n; i++){

            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }

            if(st.empty()){
                p[i] = -1;
            }
            else{
                p[i] = st.top();
            }

            st.push(i);
        }

        return p;
    }


    vector<int> nextSmaller(vector<int> &arr){

        stack<int> st;
        int n = arr.size();
        vector<int> p(n);

        for(int i = n - 1; i >= 0; i--){

            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()){
                p[i] = n;
            }
            else{
                p[i] = st.top();
            }

            st.push(i);
        }

        return p;
    }


    int sumSubarrayMins(vector<int>& arr) {

        vector<int> prev(arr.size());
        vector<int> next(arr.size());

        prev = previousSmaller(arr);
        next = nextSmaller(arr);

        long long ans = 0;

        for(int i = 0; i < arr.size(); i++){

            long long left = i - prev[i];
            long long right = next[i] - i;

            ans = (ans + (1LL * arr[i] * left % mod) * right % mod) % mod;
        }

        return ans;
    }
};