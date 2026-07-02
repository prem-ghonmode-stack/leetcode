class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0)
        {
            std::string s = std::to_string(x);
            std::string rs(s.size(), ' ');
            for (int i = 0; i < s.size(); i++)
            {
                rs[i] = s[s.size() - 1 - i];
            }
            
            return s == rs;
        }
        if (x < 0)
            return false;
    return 0;
    }
};
