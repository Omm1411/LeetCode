class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++) {
            int start = 0;
            int end = arr2.size() - 1;
            bool fail = false;
            while (start <= end) {
                int mid = start + (end - start) / 2;
                if (arr2[mid] < arr1[i] - d) {
                    start = mid + 1;
                } else if (arr2[mid] > arr1[i] + d) {
                    end = mid - 1;
                } else {
                    fail = true;
                    break;
                }
            }
            if (fail == false)
                ans++;
        }
        return ans;
    }
};