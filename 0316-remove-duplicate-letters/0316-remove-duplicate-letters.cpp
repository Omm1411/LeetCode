class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26,0);
        vector<bool> encountered(26,false);
        for(int i=0;i<s.size();i++)
        {
            last[s[i]-'a'] = i;
        }
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            char c = s[i];
            if(encountered[c-'a']==true)continue;
            while(!st.empty() and c < st.top() and last[st.top()-'a']>i)
            {   
                encountered[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            encountered[s[i]-'a']=true;
        }
        string ans= "";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};