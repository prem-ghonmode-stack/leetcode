class Solution {
public:
    int strStr(string haystack, string needle) {
        int needLen = needle.length();
        int hayLen = haystack.length();
        vector<string> hay; 
        vector<int> index;

        for (int i = 0; i <= hayLen - needLen; i++)
        {
            string sub = haystack.substr(i, needLen);
            hay.push_back(sub);
        }

        for (int i = 0; i < (int)hay.size(); i++)
        {
            if (hay[i] == needle)
            {
                index.push_back(i);
            }
        }

        if (index.empty())  
        {
            return -1;
        }
        return index[0];
    }
};
