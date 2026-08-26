class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int i = 0;
        while(i<s.size())
        {
            
            if(s[i]=='B' and !st.empty() and st.top()=='A')
            {
                st.pop();
                i++;
            }
            
            else if(s[i]=='D' and !st.empty() and st.top()=='C')
            {
                st.pop();
                i++;
            }
            else
            {
                st.push(s[i]);
                i++;
            }

        }
        int ans = 0;
        while(!st.empty())
        {
            ans++;
            st.pop();
        }
        return ans;
    }
};