class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> a(nums.size()+1,0);
        for(auto &it : queries)
        {
            int start=it[0];
            int end=it[1];
            
            a[start]-=1;
            a[end+1]+=1;
        }
        int curr = 0;
        for (int i = 0; i < n; i++) 
        {
            curr += a[i];
            if (nums[i] + curr > 0) return false;
        }
        return true;

    }
};