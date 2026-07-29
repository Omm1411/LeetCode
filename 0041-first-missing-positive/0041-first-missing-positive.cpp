class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int i=0;
    int ans=1;
    sort(nums.begin(),nums.end());
    while(i<nums.size())
    {
        if(nums[i]<ans)
        {
            i++;
            continue;
        }
        else if(nums[i]==ans)
        {
            ans++;
        }
        else if(nums[i]>ans)
        {
            break;
        }
    }  
    return ans;  
    }
};