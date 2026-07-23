class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n,0);
        for(auto &book : bookings)
        {
            int count = book[2];
            int first = book[0];
            int last = book[1];

            arr[first-1]+=count;
            if (last<=n-1)arr[last]-=count;
        }     
        vector<int> ans(n,0);
        for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];
        return arr;
    }
};