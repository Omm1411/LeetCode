class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (mpp.find(target - num) != mpp.end()) {
                return {i, mpp[target - num]};
            }
            mpp[num] = i;
        }

        return {};        
    }
};