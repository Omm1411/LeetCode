class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        vector<vector<long long>> sum(wall.size());

        for (int i = 0; i < wall.size(); i++) 
        {
            sum[i] = vector<long long>(wall[i].size(), 0);
        }
        for(int i=0;i<wall.size();i++)
        {
            for(int j=0;j<wall[i].size();j++)
            {
                if(j==0)sum[i][j]+=wall[i][j];
                else sum[i][j]=wall[i][j]+sum[i][j-1];
            }
        }
        unordered_map<long long,int> freq;
        for(int i=0;i<wall.size();i++)
        {
            for(int j=0;j+1<wall[i].size();j++)
            {
                freq[sum[i][j]]++;
            }
        }
        int maxc=0;
        for(auto it : freq)
        {
            if(it.second>maxc)
            {
                maxc=it.second;
            }
        }
        return wall.size()-maxc;

        
    }
};