class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = 0;
        int leftsum = 0;

        for(int i = 0; i <= n; i++){
            totalsum += i;
        }

        for(int j = 0; j <= n; j++){
            if(leftsum == totalsum - leftsum - j){
                return j;
            }

            leftsum += j;
        }

        return -1;
    }
};