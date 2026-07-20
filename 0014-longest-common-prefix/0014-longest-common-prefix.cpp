class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string start = strs[0];
        string end = strs[strs.size()-1];
        int i=0;
        while(i<min(start.size(),end.size()) and start[i]==end[i] )
        {
            ans+=start[i];
            i++;
        }
        return ans;
        
    }
};