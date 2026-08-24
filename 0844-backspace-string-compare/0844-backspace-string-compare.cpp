class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        string c = "";
        string d = "";
        
        int i = 0;
        while(i < s.size()) {
            if (s[i] == '#') {
                if (!a.empty()) a.pop(); 
            } else {
                a.push(s[i]);      
            }
            i++;
        }
        
        int j = 0;
        while(j < t.size()) {
            if (t[j] == '#') {
                if (!b.empty()) b.pop(); 
            } else {
                b.push(t[j]);          
            }
            j++;
        }
        
        while(!a.empty()) {
            c += a.top();
            a.pop();
        }
        while(!b.empty()) {
            d += b.top();
            b.pop();
        }
        
        return c == d;
    }
};
