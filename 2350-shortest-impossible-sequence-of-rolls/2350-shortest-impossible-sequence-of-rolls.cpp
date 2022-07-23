class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        // unordered_map<int,int> count;
        // int ans=INT_MAX, sum=0;
        // for(int i=0; i<rolls.size(); i++)
        // {
        //     count[rolls[i]]++;
        //     sum+=count[rolls[i]];
        //     if(count.size()==k && sum%k==0 && i%k==0)  ans++;
        //     else if((sum%k!=0 && i%k==0) || count.size()!=k) break;
        // }
        // return ans;
        
        // unordered_map<int,int> count;
        // int ans=INT_MAX, sum=0;
        // for(int i=0; i<rolls.size(); i++)
        // {
        //     count[rolls[i]]++;
        // }
        // for(auto c:count)
        // {
        //     ans=min(ans, c.second);
        //     sum+=c.second;
        // }
        // if(sum%k==0) return ans+1;
        // else return ans;
        
        int ans = 1;
        unordered_set<int> s;
        for (int& r : rolls) {
            s.insert(r);
            if (s.size() == k) {
                ans++;
                s.clear();
            }
        }
        return ans;
    }
};