class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), ans=0;
        vector<int> magic={1,2,3,4,5,6,7,8,9};
        
        for(int i=1; i<n-1; i++) {
           int d1=0, d2=0, h1=0,h2=0,h3=0,v1=0,v2=0,v3=0;
           for(int j=1; j<m-1; j++) {
               vector<int> g = {grid[i-1][j-1],grid[i-1][j],grid[i-1][j+1],grid[i][j-1],grid[i][j],grid[i][j+1],grid[i+1][j-1],grid[i+1][j],grid[i+1][j+1]};
               sort(g.begin(), g.end());
               h1=grid[i-1][j-1] + grid[i-1][j] + grid[i-1][j+1];
               h2=grid[i][j-1] + grid[i][j] + grid[i][j+1];
               h3=grid[i+1][j-1] + grid[i+1][j] + grid[i+1][j+1];
               d1=grid[i-1][j-1] + grid[i][j] + grid[i+1][j+1];
               d2=grid[i-1][j+1] + grid[i][j] + grid[i+1][j-1];
               v1=grid[i-1][j-1] + grid[i][j-1] + grid[i+1][j-1];
               v2=grid[i-1][j] + grid[i][j] + grid[i+1][j];
               v3=grid[i-1][j+1] + grid[i][j+1] + grid[i+1][j+1];
               // cout<<h1<<h2<<h3<<d1<<d2<<v1<<v2<<v3<<endl;
               // for(int t:g) cout<<t<<";";
               // cout<<endl;
               // if(h1==h2==h3==d1==d2==v1==v2==v3) ans++;
               if (h1 == h2 && h2 == h3 && h3 == d1 && d1 == d2 && 
                    v1 == v2 && v2 == v3 && v3==15 && g==magic) ans++;
           }
        }
        return ans;
    }
};