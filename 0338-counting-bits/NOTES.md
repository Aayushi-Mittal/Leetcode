__builtin_popcount(x) is a function in C++ returns the number of 1-bits set in an int x. In fact, "popcount" stands for "population count,"
​
```
vector<int> ans(n+1, 0);
for(int i = 1; i<=n; ++i)
ans[i] = ans[i/2] + i%2;
return ans;
```
​