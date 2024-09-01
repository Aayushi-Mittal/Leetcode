class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size()-1, m=image[0].size()-1;
        vector<vector<int>> ans=image;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                ans[i][j]=1-image[i][m-j];
            }
        }
        return ans;
    }
};