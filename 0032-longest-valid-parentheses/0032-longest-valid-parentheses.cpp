class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int max_len=0;
        st.push(-1);
        for(int i=0; i<s.size(); i++)
        {
            int t=st.top();
            if(s[i]==')' && st.top()!=-1 && s[t]=='(') 
            {
                st.pop();
                max_len=max(max_len, i-st.top());
            }
            else st.push(i);
        }
        return max_len;
    }
};