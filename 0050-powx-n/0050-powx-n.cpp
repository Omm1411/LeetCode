class Solution {
public:
    double myPow(double x, int n) {
        long exp = n;
        if(n<0)
        {
            exp = -exp;
            x = 1/x;
        }
        return power(x,exp);
        
    }
    double power(double x,int n)
    {
        if(n==0)return 1;
        double half = power(x,n/2);
        if(n%2==0)return half*half;
        return x*half*half;
    }
};