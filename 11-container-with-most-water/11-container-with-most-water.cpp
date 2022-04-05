class Solution {
public:
    int maxArea(vector<int>& height) {
        int l1=0, l2=height.size()-1, maxa=0, h=0;
        while(l1<l2)
        {
            maxa = max(maxa, (abs(l2-l1)*min(height[l1], height[l2])));
            h = min(height[l1], height[l2]);
            while (height[l1] <= h && l1 < l2) l1++;
            while (height[l2] <= h && l1 < l2) l2--;
        }
        return maxa;
    }
};