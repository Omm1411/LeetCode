class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        vector<int> ans;
        bool carry = true;
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(carry==true and nums[i]==9)
            {
                ans.push_back(0);
            }
            else if(carry==true)
            {
                ans.push_back(++nums[i]);
                carry = false;
            }
            else if(carry==false)
            {
                ans.push_back(nums[i]);
            }
        }
        if(carry == true)ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};