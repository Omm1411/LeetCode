class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        map[0]=1;
        int prefix = 0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            int rem = prefix%k;
            if(rem<0)rem+=k;
            if(map.count(rem))
            {
                count+=map[rem];
            }
            map[rem]++;
        }
        return count;

        
    }
};