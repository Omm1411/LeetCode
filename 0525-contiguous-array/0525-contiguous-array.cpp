class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(auto &it:nums)
        {
            if(it==0)
            {
                it=-1;
            }
        }
        unordered_map<int,int> firstIndex;
        firstIndex[0]=-1;
        int sum=0;
        int maxLen=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(firstIndex.find(sum)!=firstIndex.end())
            {
                maxLen=max(maxLen, i-firstIndex[sum]);
            }
            else
            {
                firstIndex[sum]=i;
            }
        }
        return maxLen;
    }
};