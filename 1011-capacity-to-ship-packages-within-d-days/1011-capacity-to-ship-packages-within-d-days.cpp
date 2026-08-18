class Solution {
public:
    long long daystaken(int mid, vector<int>weights)
    {
        int x = mid;
        int i=0;
        long long days=1;
        while(i<weights.size())
        {   
            if(x>=weights[i])
            {
                x-=weights[i];
                i++;
            }
            else
            {   
                days++;
                x=mid;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int min = 0;
        for(int i=0;i<weights.size();i++)
        {
            min = max(min, weights[i]);
        }
        int max=0;
        for(int i=0;i<weights.size();i++)
        {
            max+=weights[i];
        }
        while(min<max)
        {
            int mid = min + (max-min)/2;
            if(daystaken(mid,weights)>days)
            {
                min=mid+1;
            }
            else
            {
                max = mid;
            }

        }
        return min;
    }
};