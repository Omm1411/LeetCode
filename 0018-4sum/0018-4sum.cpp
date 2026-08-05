class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        int k,l;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                k=j+1;
                l=n-1;
                while(k<l)
                {
                    long long sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                        while(k<l and nums[k]==nums[k-1])k++;
                        while(k<l and nums[l]==nums[l+1])l--;

                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};