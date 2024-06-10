class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int> current=heights;
        sort(heights.begin(), heights.end());
        for(int i=0; i<heights.size(); i++)
            if(heights[i]!=current[i]) ans++;
        return ans;
    }
};