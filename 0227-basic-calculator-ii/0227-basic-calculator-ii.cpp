class Solution {
public:
    int calculate(string s) {
        char op = '+';
        stack<int> st;
        int i = 0;
        while(i<s.size())
        {
            if(s[i]==' ')
            {
                i++;
            }
            else if(s[i]=='+' or s[i]=='-' or s[i]=='/' or s[i]=='*')
            {
                op = s[i];
                i++;
            }
            else
            {
                int num = 0;
                while(i<s.size() and isdigit(s[i]))
                {
                    num = num*10 + (s[i]-'0');
                    i++;
                }

            
            if(op == '+')
            {
                st.push(num);
            }
            else if(op == '-')
            {
                st.push(num*-1);
            }
            else
            {
                int x = st.top();
                st.pop();
                if(op == '*')st.push(num*x);
                else st.push(x/num);
            }
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};