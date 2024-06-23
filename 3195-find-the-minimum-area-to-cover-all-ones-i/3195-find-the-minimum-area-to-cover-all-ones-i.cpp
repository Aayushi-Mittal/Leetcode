class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int x1=INT_MAX, x2=0, y1=INT_MAX, y2=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1) {
                    x1=min(x1,i);
                    x2=max(x2,i);
                    y1=min(y1,j);
                    y2=max(y2,j);
                }
            }
        }
        // cout<<x1<<x2<<y1<<y2<<endl;
        int ans = (x2-x1+1)*(y2-y1+1);
        return ans;
    }
};