class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        return check(a,0,a.size()-1);
    }
    bool check(string x,int l,int r)
    {
        if(l>=r)
        {
            return true;
        }
        if(x[l]!=x[r])return false;
        return check(x,l+1,r-1);

    }
};