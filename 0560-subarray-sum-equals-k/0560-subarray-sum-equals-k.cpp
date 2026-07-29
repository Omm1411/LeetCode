class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size(),0);
        int count=0;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        unordered_map<int,int> freq;
        
        for(int i=0;i<prefix.size();i++)
        {
            if(prefix[i]==k)count++;
            int val = prefix[i]-k;
            count+=freq[val];
            freq[prefix[i]]++;
        }
    return count;
        
    }
};