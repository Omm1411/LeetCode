class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back({intervals[0][0], intervals[0][1]});
        for(int i = 1; i < intervals.size(); i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int present = ans.back()[1];
            if(start <= present)
            {
                ans.back()[1] = max(present, end);
            }
            else
            {
                ans.push_back({start, end});
            }
        }
        return ans;
    }
};