class Solution {
public:
    string reorganizeString(string s) {
        string res="";
        map<char,int> count;
        for(int i=0; i<s.size(); i++)
            count[s[i]]++;
        priority_queue<pair<int,char>> pq;
        for(auto c:count)
            pq.push({c.second, c.first});
        
        pair<int,char> p1, p2;
        while(pq.empty()!=true)
        {
            p1=pq.top();
            pq.pop();
            res+=p1.second;
            if(!pq.empty()){
                p2=pq.top(); pq.pop();
                res+=p2.second;
                if(p2.first>1)
                    pq.push({p2.first-1, p2.second});
            }
            if(p1.first>1)
                pq.push({p1.first-1, p1.second});
        }
        for (int i = 1; i < res.size(); i++)
            if (res[i] == res[i - 1]) return "";
        return res;
    }
};