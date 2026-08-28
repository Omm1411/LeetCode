class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' and !st.empty())
            {
                st.pop();
            }
            else 
            {
                ans++;
            }
        }
        while(!st.empty())
        {
            ans++;
            st.pop();
        }
        return ans;
    }
};