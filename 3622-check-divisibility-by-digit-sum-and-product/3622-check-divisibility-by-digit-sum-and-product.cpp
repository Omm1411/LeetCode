class Solution {
public:
    bool checkDivisibility(int n) {
        bool ans = false;
        int c= n;
        int a = 1;
        int b = 0;
        while(c!=0)
        {
            a*=c%10;
            b+=c%10;
            c = c/10;
        }
        if(n%(a+b) == 0)
        {
            ans = true;
        }
        return ans;
    }
};