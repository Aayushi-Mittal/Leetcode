class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<float,int>> pq;
        for(int i=0; i<points.size(); i++) {
            float d = sqrt(pow(points[i][0]-0, 2) + pow(points[i][1]-0, 2));
            pq.push({d,i});
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size()>0) {
            int i=pq.top().second;
            ans.push_back({points[i][0], points[i][1]});
            pq.pop();
        }
        return ans;
    }
};