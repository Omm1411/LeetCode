class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int ans=n;
        int target = sum%p;
        if(target==0)return 0;
        long long prefix=0;
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {   
            prefix+=nums[i];
            int rem = prefix%p;
            int need = (rem-target+p)%p;
            if(mpp.count(need))
            {
                ans=min(ans,i-mpp[need]);
            }
            mpp[rem]=i;
        }
        return ans==n?-1:ans;

        
    }
};