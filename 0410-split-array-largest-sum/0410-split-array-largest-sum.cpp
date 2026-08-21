class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int low = 0;
        int high = 0;

        for(int i=0;i<nums.size();i++)
        {
            low = max(low, nums[i]);
            high += nums[i];
        }

        while(low < high)
        {
            int mid = low + (high-low)/2;

            if(possible(nums,k,mid))
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }

        return low;
    }


    bool possible(vector<int>& nums,int k,int mid)
    {
        int curr = 0;
        int piece = 1;

        for(int i=0;i<nums.size();i++)
        {
            if(curr + nums[i] > mid)
            {
                piece++;
                curr = nums[i];

                if(piece > k)
                    return false;
            }
            else
            {
                curr += nums[i];
            }
        }

        return true;
    }
};