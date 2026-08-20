class Solution {
public:
    bool place(vector<int>arr,int dist,int ball)
    {   
        int countball = 1;
        int lastplaced = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-lastplaced>=dist)
            {
                countball++;
                lastplaced = arr[i];
            }
            if(countball>=ball)
            {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int low = 1;
        int high = position[n-1]-position[0];
        int ans = 1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(place(position,mid,m))
            {
                ans=mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
        
    }
};