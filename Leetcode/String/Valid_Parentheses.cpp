class Solution {
public:
    bool isValid(string s) {
        int len, i;
        len = s.length();
        
        stack<char> a;
        
        if (len < 2){
            return false;
        }
        
        for (i = 0; i < len; i++){
            if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' || s[i] == '{' || s[i] == '}'){
                if (s[i] == '(')
                    a.push(')');
                else
                    if (s[i] == '[')
                        a.push(']');
                else
                    if (s[i] == '{')
                        a.push('}');
                else
                    if (a.size() == 0)
                        return false;
                else
                    if (s[i] == a.top())
                        a.pop();
                else 
                    return false;
            }
        }
        
        if (a.size() == 0)
            return true;
        
        return false;
    }
};
