class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans=1;
        int up=0,down=0,peak=0;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                peak = ++up;
                ans += up+1;
                down = 0;
            }
            else if(ratings[i]==ratings[i-1]){
                up=down=peak=0;
                ans +=1;
            }
            else{
                down++;
                up=0;
                ans +=  down;
                ans += (down>peak);
            }
        }
        return ans;
    }
};