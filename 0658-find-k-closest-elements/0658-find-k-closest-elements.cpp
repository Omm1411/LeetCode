class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r = arr.size()-1;
        while((r-l)>=k)           // Check whether the window is less than k 
        {
            if(x-arr[l]<=arr[r]-x)     // check whether left window is closer than right 
            {
                r--;                    // move towards left
            }
            else
            {
                l++;                    // else move towards right
            }
        }                                  // loop ends when window is of k length
        return vector<int>(begin(arr)+l,begin(arr)+r+1);
        
    }
};