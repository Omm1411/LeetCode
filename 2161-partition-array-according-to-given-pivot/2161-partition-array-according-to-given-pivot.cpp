class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> l;
        vector<int> e;
        vector<int> r;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                l.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                e.push_back(nums[i]);
            }
            else
            {
                r.push_back(nums[i]);
            }
        }

        for(int i=0;i<l.size();i++)
        {
            nums[i]=l[i];
        }
        for(int i=0;i<e.size();i++)
        {
            nums[i+l.size()]=e[i];
        }
        for(int i=0;i<r.size();i++)
        { 
            nums[i+l.size()+e.size()]=r[i];
        }
        return nums;
    }
};