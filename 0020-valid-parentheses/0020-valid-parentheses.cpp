class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans = true;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else 
            {
                if(st.empty())
                {
                    return false;
                }
                else if((s[i]==')' and st.top()=='(') || (s[i]=='}' and st.top()=='{')  || (s[i]==']' and st.top()=='[')  )
                {
                    st.pop();
                    continue;
                }
                else
                {
                    ans = false;
                }
            }
        }
        if(!st.empty()) ans = false;
        return ans;
    }
};