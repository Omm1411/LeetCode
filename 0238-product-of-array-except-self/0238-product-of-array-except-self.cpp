class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        for(int i=0;i<nums.size();i++)
        {
            product = product * nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]==0)
            {   
                int pro = 1;
                for(int j=0;j<nums.size();j++)
                {
                    if(j==i)
                    {
                        continue;
                    }
                    pro = pro * nums[j];
                }
                ans.push_back(pro);
                continue;
            }
            ans.push_back(product/nums[i]);
        }
        return ans;
    
    
    }
};