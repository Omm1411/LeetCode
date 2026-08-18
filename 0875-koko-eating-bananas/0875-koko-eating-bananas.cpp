class Solution {
public:
    long long timetaken(int speed, vector<int>& piles) {
        long long time = 0;
        for (int i = 0; i < piles.size(); i++) {
            time += (1LL * piles[i] + speed - 1) / speed;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int minspeed = 1;
        int maxspeed = 1;
        int ans = 0;

        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > maxspeed) {
                maxspeed = piles[i];
            }
        }

        while (minspeed <= maxspeed) {
            int mid = minspeed + (maxspeed - minspeed) / 2;

            long long time = timetaken(mid, piles);

            if (time > h) {
                minspeed = mid + 1;
            }
            else {
                ans = mid;
                maxspeed = mid - 1;
            }
        }

        return ans;
    }
};