class Solution {
public:
    bool possible(vector<int>position,int mid , int m)
    {
        int lastplaced = position[0];
        int count = 1;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]-lastplaced>=mid)
            {
                lastplaced = position[i];
                count++;
            }
            if(count>=m)
            {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int ans=1;
        sort(position.begin(),position.end());
        int low = 1;
        int high = position[n-1]-position[0];
        while(low<=high)
        {   
            int mid = low+(high-low)/2;
            if(possible(position,mid,m))
            {
                low = mid+1;
                ans = mid;
            }
            else
            {
                high = mid-1 ;
            }
        }
        return ans;
    }
};