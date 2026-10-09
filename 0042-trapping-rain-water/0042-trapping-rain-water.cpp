class Solution {
public:
    int trap(vector<int>& height) {
         
        int n = height.size();
        int total_water = 0;

        vector<int> lmax(n);
        vector<int> Rmax(n);

        lmax[0] = height[0];
        Rmax[n - 1] = height[n - 1];

        for(int i = 1; i < n; i++){
            lmax[i] = max(lmax[i - 1] , height[i]);
        }

        for(int i = n - 2 ; i >= 0; i--){
            Rmax[i] = max(Rmax[i+1] , height[i]);
        }
         
        for(int i = 0; i < n; i++){
            total_water += min(lmax[i] , Rmax[i]) - height[i];
        }

        return total_water;
  
     }
};