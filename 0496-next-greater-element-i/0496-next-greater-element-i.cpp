class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> a;
        vector<int> ans;
        for(int i=0;i<nums2.size();i++)
        {
            a.push(nums2[i]);
        }
        stack<int> b;
        for(int i=0;i<nums1.size();i++)
        {
            b=a;
            int max = -1;
            while(b.top()!=nums1[i])
            {
                if(b.top()>nums1[i])max=b.top();
                b.pop();
            }
            ans.push_back(max);
        }
        return ans;
    }
};