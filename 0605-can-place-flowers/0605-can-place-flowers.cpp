class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int sz = arr.size();
        for(int i = 0; i < sz; i++)
        {
            int left = (i == 0) ? 0 : arr[i-1];
            int right = (i == sz-1) ? 0 : arr[i+1];
            if(arr[i] == 0 && left == 0 && right == 0)
            {
                arr[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};