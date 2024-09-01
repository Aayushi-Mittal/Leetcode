class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int mat[m][n], ans=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                mat[i][j]=0;
            } 
        }
        for(int k=0; k<indices.size(); k++)
        {
            for(int i=0; i<n; i++)
                mat[indices[k][0]][i]++;
            for(int j=0; j<m; j++)
                mat[j][indices[k][1]]++;
        }
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(mat[i][j]%2==1) ans++;
            
        return ans;
    }
};