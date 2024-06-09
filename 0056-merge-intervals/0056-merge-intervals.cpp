class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<vector<int>> merge;
        merge.push_back({meetings[0][0], meetings[0][1]});
        for(int i=1; i<meetings.size(); i++)
        {
            if(meetings[i][0]>=merge[merge.size()-1][0] && meetings[i][0]<=merge[merge.size()-1][1])
            {
                merge[merge.size()-1][0]=merge[merge.size()-1][0]; 
                merge[merge.size()-1][1]=max(merge[merge.size()-1][1],meetings[i][1]);
            }
            else {
                merge.push_back({meetings[i][0], meetings[i][1]});
            }
        }
        return merge;
    }
};