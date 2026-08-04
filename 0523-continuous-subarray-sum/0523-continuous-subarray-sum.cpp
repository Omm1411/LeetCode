class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefix=0;
        int n=nums.size();
        vector<int> rem(n,0);
        bool status = false;
        unordered_map<int,int> mpp; 
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            int remainder = prefix%k;
            rem[i]=remainder;
            if(mpp.find(remainder)==mpp.end())
            mpp[remainder]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(mpp.find(rem[i])!=mpp.end() or mpp.find(0)!=mpp.end())
            {
                if(i-mpp[rem[i]]>=2)
                {
                    status=true;
                }
            }
        }

       return status; 
    }
};