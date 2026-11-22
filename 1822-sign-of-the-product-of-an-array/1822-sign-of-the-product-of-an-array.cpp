class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)neg++;
            else if(nums[i]==0)
            {   
                return 0;                
            }
            else continue;
        }
        if(neg%2==0)ans=1;
        else ans = -1;
        return ans;
    }
};