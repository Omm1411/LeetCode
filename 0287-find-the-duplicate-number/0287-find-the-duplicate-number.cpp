class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int i=0;
        int ans=0;
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            if(it->second!=1)
            {
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};