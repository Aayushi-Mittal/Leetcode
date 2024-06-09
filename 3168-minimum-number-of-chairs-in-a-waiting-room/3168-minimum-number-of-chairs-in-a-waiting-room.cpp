class Solution {
public:
    int minimumChairs(string s) {
//         int ans=0, av=0;
//         for(int i=0; i<s.size(); i++)
//         {
//             // if(s[i]=='E' && ans>0) av--;
//             // else if(s[i]=='E' && ans<=0) av++;
//             // if(s[i]=='L') av++;
//             if(s[i]=='E')
//             {
//                 if(s[i-1]=='L')
//             }
//             if(s[i]=='L')
//             {
                
//             }
//             ans=max(ans, av);
//         }
//         return ans;
        

// 1
// _
// 1
// _
// 1
// 11
// 1_
    
// L
    
    stack<int> st;
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='E') st.push(1);
        if(s[i]=='L') st.pop();
        if(st.size()>ans) ans=st.size();
    }
    return ans;
        
        
//         stack st;
//         int ans=0, av=0, n=s.size();
//         for(int i=0; i<n; i++)
//         {
//             if(s[i]=='E'){
//                 if(st.top()=='L')
//                 st.push('E');
//             } else {
//                 if(st.size()==0)
//                 {
//                     st.push('L')
//                 }
//             }
//         }
        
    }
};