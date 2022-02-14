class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        // priority_queue<pair<int,int>> pq;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0; i<mat.size(); i++)
        {
            int sum=0;     
            for(int j=0; j<mat[i].size() && mat[i][j]==1; j++)
            {
                sum+=mat[i][j];
            }
            pq.push({sum,i});
        }
        while(k-- && pq.empty()!=true){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};