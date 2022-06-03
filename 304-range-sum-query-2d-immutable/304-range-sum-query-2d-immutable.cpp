class NumMatrix {
public:
    vector<vector<int>> prefixsum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        prefixsum = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size(), 0));
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                prefixsum[i][j]=matrix[i][j];
                if (j - 1 >= 0)
                    prefixsum[i][j] += prefixsum[i][j - 1];
                if (i - 1 >= 0)
                    prefixsum[i][j] += prefixsum[i - 1][j];
                if (i - 1 >= 0 && j - 1 >= 0)
                    prefixsum[i][j] -= prefixsum[i - 1][j - 1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        //ans = prefixsum[row2][col2] - prefixsum[row2][col1-1] - prefixsum[row1-1][col2] + prefixsum[row1-1][col1-1];
        int ans=prefixsum[row2][col2];
        if(col1-1>=0)
            ans-=prefixsum[row2][col1-1];
        if(row1-1>=0)
            ans-=prefixsum[row1-1][col2];
        if(col1-1>=0 && row1-1>=0)
            ans+=prefixsum[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */