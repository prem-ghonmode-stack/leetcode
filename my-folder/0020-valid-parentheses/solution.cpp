class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        bool result = true;
        string open; 

        for (int i = 0; i < len; i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                open += c; 
            }
            else
            {
                if (open.empty())
                {
                    result = false;
                    break;
                }
                char top = open.back();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '['))
                {
                    result = false;
                    break;
                }
                open.pop_back(); 
            }
        }

        if (!open.empty()) result = false; 
        return result;
    }
};
