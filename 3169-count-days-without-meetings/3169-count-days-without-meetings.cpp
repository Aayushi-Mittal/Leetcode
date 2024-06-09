class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
        // 1 2 3 4 5 6 7 8 9 10
        //         _____
        // _____
        //                  ____
        
        // 1 2 3 4 5 6 7 8 9 10
        //   _____
        // _____
        
        // int ans=0;
        // vector<int> temp(days,0);
        // for(int i=0; i<meetings.size(); i++)
        // {
        //     for(int j=meetings[i][0]-1; j<=meetings[i][1]-1; j++)
        //         temp[j]=1;
        // }
        // for(int i=0; i<temp.size(); i++)
        // {
        //     // cout<<temp[i];
        //     if(temp[i]==0) ans++;
        // }
        // // cout<<endl;
        // return ans;
        
        //[[5,7],[1,3],[9,10]]
        //[[5,8],[6,10],[9,10]]
        //[[5,8],[6,10],[9,10]]
        // [1,3][1,4][2,4]
         // [1,3],[5,7],[9,10]
        // 8
        // [[2,3],[3,5],[8,8]]
        // [2,5][8,8]
        
        
        
        sort(meetings.begin(),meetings.end());
        int ans=0;
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
        for(int i=0; i<merge.size(); i++) ans+=merge[i][1]-merge[i][0]+1;
        return days-ans;
        
    }
};