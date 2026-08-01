class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum = 0;
        for(auto &it:nums)
        {
            sum+=it;
        }
        int n=nums.size();
        int target = sum%p;
        if(target==0)return 0;
        int ans = n;
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        long long prefix=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            long long currmod = prefix%p;
            long long need = (currmod-target+p)%p;
            if(mpp.count(need))
            ans=min(ans,i-mpp[need]);
            mpp[currmod]=i;
        }
        return ans==n?-1:ans;

        
    }
};