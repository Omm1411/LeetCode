class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int count = 0;
        vector<vector<int>> sum(grid.size(), vector<int>(grid[0].size(), 0));
        if(grid[0][0]>k)return 0;
        for(int i=0;i<grid.size();i++)
        {
           for(int j=0;j<grid[0].size();j++)
           {
            sum[i][j]=grid[i][j];
            if(i>0)sum[i][j]+=sum[i-1][j];
            if(j>0)sum[i][j]+=sum[i][j-1];
            if(i>0 and j>0)sum[i][j]-=sum[i-1][j-1];
            if(sum[i][j]<=k) count++;
           }
        }
        return count;
    }
};