class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++){

            bool destroyed = false;

         while(!st.empty() && st.top() > 0 && asteroids[i] < 0){

                if(st.top() < -asteroids[i]){
                    st.pop();
                }
                else if(st.top() == -asteroids[i]){
                    st.pop();
                    destroyed = true;
                    break;
                }
             else{
                    destroyed = true;
                    break;
                }
            }

         if(!destroyed){
                st.push(asteroids[i]);
            }
        }

     vector<int> output(st.size());

        for(int i = st.size() - 1; i >= 0; i--){
            output[i] = st.top();
            st.pop();
        }

        return output;
    }
};