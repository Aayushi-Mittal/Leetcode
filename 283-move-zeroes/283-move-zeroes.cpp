class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0, j=0, n=nums.size();
        for(int i=0; j<n && i+count<n; i++)
        {
            while(j<n && nums[j]==0) {
                count++; j++;
            }
            if(j<n)
                nums[i]=nums[j];
            j++;
        }
        while(count>0){
            nums[n-count]=0;
            count--;
        }
    }
};