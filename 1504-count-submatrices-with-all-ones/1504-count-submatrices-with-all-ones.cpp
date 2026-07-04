class Solution {
public:
    int countFromRow(vector<int>& h){

        int ans=0;

        for(int i=0;i<h.size();i++){

            int mn=h[i];

            for(int j=i;j>=0;j--){

                mn=min(mn,h[j]);

                if(mn==0) break;

                ans+=mn;
            }
        }

        return ans;
    }

    int numSubmat(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();

        vector<int> height(m,0);

        int ans=0;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(mat[i][j]==0)
                     height[j]=0;
                else
                     height[j]++;
            }

            ans+=countFromRow(height);
        }

        return ans;
    }
};