class Solution {
public:
    static bool helper(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
               return a[1] > b[1];
          return a[0] < b[0];
     }
     int numberOfWeakCharacters(vector<vector<int>> &properties)
     {
          sort(properties.begin(), properties.end(), helper);
          int max_defence = INT_MIN;
          int ans = 0;

          for (int i = properties.size() - 1; i >= 0; i--)
          {
               if (properties[i][1] < max_defence)
                    ans++;
               max_defence = max(max_defence, properties[i][1]);
          }
          return ans;
     }
};