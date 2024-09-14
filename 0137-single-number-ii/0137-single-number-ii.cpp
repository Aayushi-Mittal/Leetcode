class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b1=0, b2=0;
        for(int i=0; i<nums.size(); i++)
        {
            b1 = (nums[i] ^ b1) & ~b2;
            b2 = (nums[i] ^ b2) & ~b1;
        }
        return b1;
    }
};

//https://www.youtube.com/watch?v=5Bb2nqA40JY

// Step	Current Num	b1	b2	Explanation
    // 1	2 (10)	10	00	b1 = (2 ^ 0) & ~0 = 2, b2 remains 0
    // 2	2 (10)	00	10	b1 = (2 ^ 2) & ~0 = 0, b2 = (2 ^ 0) & ~2 = 2
    // 3	3 (11)	01	00	b1 = (3 ^ 0) & ~2 = 1, b2 = (3 ^ 2) & ~1 = 0
    // 4	2 (10)	01	00	b1 = (2 ^ 1) & ~0 = 0, b2 = (2 ^ 0) & ~0 = 0