class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<int,int> freq;
        for(auto i:sentence)
        {
            freq[i-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};