class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string op:operations){
            (op[1]=='+') ? x+=1 : x-=1;
        }
        return x;
    }
};