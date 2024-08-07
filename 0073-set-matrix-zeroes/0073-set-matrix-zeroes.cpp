class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row, col;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(matrix[i][j]==0) {
                    col.insert(j);
                    row.insert(i);
                }
            }
        }
        for(auto i:row)
        {
            for(int j=0; j<matrix[i].size(); j++)
                matrix[i][j]=0;
        }
        for(auto i:col)
        {
            for(int j=0; j<matrix.size(); j++)
                matrix[j][i]=0;
        }
    }
};

//[[8,7,5,3,6,0,8,8,0]]