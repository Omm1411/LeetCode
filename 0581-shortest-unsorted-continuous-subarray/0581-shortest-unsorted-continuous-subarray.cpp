class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr;
        arr=nums;
        sort(arr.begin(),arr.end());
        int ans=0;
        bool first=false;
        int fist=0;
        int last=0;
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i]!=nums[i] and first==false)
            {
                first=true;
                fist=i;
            }
            else if(arr[i]!=nums[i] and first ==true)
            {
                last = i;
            }
        }
        if(fist==last)ans=0;
        else ans = last-fist+1;
    return ans;
    }
};