class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int x1=0, x2=0, y1=0, y2=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1) {
                    x1=i;
                    break;
                }
            }
        }
        for(int i=0; i<grid[0].size(); i++)
        {
            for(int j=0; j<grid.size(); j++)
            {
                if(grid[j][i]==1) {
                    y1=i;
                    break;
                }
            }
        }
        for(int i=grid.size()-1; i>=0; i--)
        {
            for(int j=grid[0].size()-1; j>=0; j--)
            {
                if(grid[i][j]==1) {
                    x2=i;
                    break;
                }
            }
        }
        for(int i=grid[0].size()-1; i>=0; i--)
        {
            for(int j=grid.size()-1; j>=0; j--)
            {
                if(grid[j][i]==1) {
                    y2=i;
                    break;
                }
            }
        }
        cout<<x1<<x2<<y1<<y2<<endl;
        int ans = (abs(x2-x1)+1)*(abs(y2-y1)+1);
        return ans;
    }
};