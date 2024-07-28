class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(), mid=0, low=0, high=n;
        while(low<high)
        {
            mid = low + (mid - low)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]) high=mid-1;
            else if(target>nums[mid]) low=mid+1;
        }
        return (high<n) ? high+1 : n;
    }
};