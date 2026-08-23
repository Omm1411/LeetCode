class Solution {
public:
    bool isValid(string s) {
        stack<char> a;

        for(auto &st:s)
        {
            if(st=='(' || st=='{' || st=='[')
            {
                a.push(st);
            }
            else
            {
                if(a.empty()) 
                    return false;

                if((st == ')' && a.top() == '(') ||
                   (st == '}' && a.top() == '{') ||
                   (st == ']' && a.top() == '['))
                {
                    a.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return a.empty();
    }
};