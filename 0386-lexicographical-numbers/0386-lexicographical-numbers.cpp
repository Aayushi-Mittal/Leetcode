class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        vector<string> temp;
        for(int i=1; i<=n; i++){
            temp.push_back(to_string(i));
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<n; i++){
            int num=0;
            for(int j=0; j<temp[i].size(); j++) num=num*10+(temp[i][j]-'0');
            ans.push_back(num);
        }
        return ans;
    }
};