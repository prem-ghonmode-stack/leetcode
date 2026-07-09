class Solution {
public:
    int lengthOfLastWord(string s) {
        std::string newS;
        int len = s.size();

        for (int i = len - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && newS.size() == 0)
                s.pop_back();
            else if(s[i] != ' ')
                newS.push_back(s[i]);
            else 
                break;
        }
        return newS.size();
    }
};
