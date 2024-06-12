class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, one=0, two=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0) zero++;
            if(nums[i]==1) one++;
            if(nums[i]==2) two++;
        }
        int i=0;
        while(zero--) {
            nums[i]=0; i++;
        }
        while(one--) {
            nums[i]=1; i++;
        }
        while(two--) {
            nums[i]=2; i++;
        }
    }
};

//  [2,0,2,1,1,0]
//  [0,0,2,1,1,2]
//  [0,0,1,1,2,2]

//  [2,0,2,1,2,1,1,0]
//  [0,0,2,1,2,1,1,2]
//  [0,0,0,1,2,1,2,2]
//  [2,0,2,1,2,1,1,0]

