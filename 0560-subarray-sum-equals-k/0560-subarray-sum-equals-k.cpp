class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        freq[0] = 1;
        int csum = 0, count = 0;
        for (int x : nums) {
            csum += x;
            if (freq.count(csum - k)) count += freq[csum - k];
            freq[csum]++;
        }
        return count;
    }
};