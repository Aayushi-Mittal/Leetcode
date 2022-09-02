class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int r1=0, r2=n-1, c1=n-1, c2=0, st=0, en=n-1, k=1;
        int m=n*n; //no of elements
        while(k<=n*n)
        {
            if(st==en)
            {
                mat[st][en]=k;
                k++;
            }
            //l to r
            for(int i=st; i<=en-1; i++)
            {
                mat[r1][i]=k;
                k++;
            }
            // cout<<"a-"<<k<<" ";
            r1++;
            
            //t to b
            for(int i=st; i<=en-1; i++)
            {
                mat[i][c1]=k;
                k++;
            }
            // cout<<"b-"<<k<<" ";
            c1--;
            
            //r to l
            for(int i=en; i>=st+1; i--)
            {
                mat[r2][i]=k;
                k++;
            }
            // cout<<"c-"<<k<<" ";
            r2--;
            
            
            //b to t
            for(int i=en; i>=st+1; i--)
            {
                mat[i][c2]=k;
                k++;
            }
            // cout<<"d-"<<k<<" ";
            c2++;
            
            en--; st++;
        }
        return mat;
    }
    
};


// n //no. of rows
// m = n*n //no. of elements
// while(m--)
// l to r
// t to b
// r to l
// b to t