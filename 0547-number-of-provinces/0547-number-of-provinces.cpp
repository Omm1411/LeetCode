class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int node,vector<int> &visited)
    {
        visited[node]=1;
        for(int i=0;i<isConnected.size();i++)
        {
            if(isConnected[node][i]==1 and visited[i]==0)
            {
                dfs(isConnected,i,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int size = isConnected.size();
        vector<int> visited(size,0);
        for(int i=0;i<size;i++)
        {
            if(!visited[i])
            {
                dfs(isConnected,i,visited);
                count++;
            }
        }
        return count;

    }
};