class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> pre(n,0);
        vector<int> post(n,0);
        for(int i=0;i<n;i++)
        {   
            if(i==0)pre[i]=nums[i];
            else pre[i] = nums[i]+pre[i-1];
        }
        for(int i=n-1;i>=0;i--)
        {   
            if(i==n-1)post[i]=nums[i];
            else post[i] = nums[i]+ post[i+1];
        }
        for(int i=0;i<n;i++)
        {
        long long left = (long long)i*nums[i] - (pre[i]-nums[i]);
        long long right = (post[i]-nums[i]) - (long long)(n-i-1)*nums[i]; 
        ans[i] = left + right;
        }
        return ans;
    }
};