class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        int prefix = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            prefix += nums[i];
            int remainder = prefix % k;
            if (remainder < 0) remainder += k;

            if (mpp.find(remainder) != mpp.end()) {
                if (i - mpp[remainder] >= 2) return true;
            } else {
                mpp[remainder] = i;
            }
        }
        return false;
    }
};