class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26,0);
        for(int i=0;i<s.size();i++)
        {
            last[s[i]-'a']=i;
        }
        stack<char> st;
        vector<bool> seen(26,false);
        for(int i=0;i<s.size();i++)
        {
            char c = s[i];
            if(seen[c-'a']==true) continue;
            while(!st.empty() and s[i]<st.top() and last[st.top()-'a']>i) 
            // stack pop till the present element is smaller than the top element and the top element is present after the current element
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(c);
            seen[c-'a']=true;
        }
        string ans = "";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};