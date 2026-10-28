class Solution {
public:
    int n,m;
    void dfs(vector<vector<int>>& image, int row, int col,int orignal,int color) {
        if(row<0 or row>=n or col<0 or col>=m or image[row][col]!=orignal)
        return;

        image[row][col] = color;

        dfs(image,row-1,col,orignal,color);
        dfs(image,row,col-1,orignal,color);
        dfs(image,row+1,col,orignal,color);
        dfs(image,row,col+1,orignal,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n = image.size();
        m = image[0].size();
        int orignal = image[sr][sc];
        if(orignal==color)return image;

        dfs(image,sr,sc,orignal,color);

        return image;
    }
};