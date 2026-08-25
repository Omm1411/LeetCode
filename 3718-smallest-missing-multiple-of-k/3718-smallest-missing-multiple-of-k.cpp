class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        for(int x : nums) {
            s.insert(x);
        }

        int multiple = k;

        while(true) {
            if(s.find(multiple) == s.end()) {
                return multiple;
            }
            multiple += k;
        }
    }
};