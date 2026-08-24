class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        char op = '+';
        stack<int> st;
        int i = 0;
        while(i<tokens.size())
        {
            if(tokens[i]=="+")
            {
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                st.push(a+b);
                i++;
            }
            else if(tokens[i]=="-")
            {
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                st.push(b-a);
                i++;
            }
            else if(tokens[i]=="*")
            {
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                st.push(a*b);
                i++;
            }
            else if(tokens[i]=="/")
            {
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                st.push(b/a);
                i++;
            }
            else
            {
                int num = stoi(tokens[i]);
                st.push(num);
                i++;
            }
        }
        return st.top();
    }
};