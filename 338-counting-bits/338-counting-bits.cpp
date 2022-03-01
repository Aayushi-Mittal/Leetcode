class Solution {
public:
    vector<int> countBits(int N) {
        
        vector<int> ans(N+1, 0);
        for(int i = 1; i<=N; ++i)
            ans[i] = ans[i/2] + i%2;
        return ans;
        
        // vector<int> ans;
        // int n=0, m=1, k=0;
        // while(n<N+1)
        // {
        //     while(k<m && n<N+1)
        //     {
        //         if(n%4==0)
        //             ans.push_back(k);
        //         else if(n%4==1 || n%4==2)
        //             ans.push_back(k+1);
        //         else {
        //             ans.push_back(k+2);
        //             k++;
        //         }
        //         n++;
        //     }
        //     m++;
        //     k=1;
        // }
        // return ans;
    }
};

            //[0,1,1,2],
            //[1,2,2,3],
            //[1,2,2,3,2,3,3,4],
            //[1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5], 1...