class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n=nums1.length, m=nums2.length;
        double nums[]=new double[m+n];
        double ans=0;
        for(int i=0; i<n; i++)
        {
            nums[i]=nums1[i];
        }
        for(int i=0; i<m; i++)
        {
            nums[n+i]=nums2[i];
        }
        Arrays.sort(nums);
        if((n+m)%2==1) ans=nums[(m+n)/2];
        else ans=((nums[(m+n+1)/2] + nums[(m+n-1)/2])/2);
        return ans;
    }
}