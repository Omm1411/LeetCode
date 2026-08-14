class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        if(tomatoSlices%2!=0)return ans;
        if(cheeseSlices>tomatoSlices)return ans;
        int jumbo = 0;
        int small = 0;
        if(tomatoSlices>=2 and cheeseSlices > tomatoSlices/4)
        {
            while(tomatoSlices/4 < cheeseSlices)
            {
                small+=1;
                tomatoSlices -= 2;
                cheeseSlices -= 1;
            }
        } 
        while(tomatoSlices %4 == 0 and tomatoSlices > 0)
        {
            jumbo+=1;
            tomatoSlices -= 4;
            cheeseSlices -= 1 ;
        }  

        if(cheeseSlices == 0 and tomatoSlices == 0)
        {
            ans.push_back(jumbo);
            ans.push_back(small);
        }
        return ans;

    }
};