class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        std::string result;
        int length = strs[0].length();

        for (int i = 0; i < length; i++)
        {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != c)
                    return result;
            };
            result += c;
        };
    return result;
    }
};
