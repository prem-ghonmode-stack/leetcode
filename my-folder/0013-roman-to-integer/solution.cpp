class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> romanNumber = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int num = 0;
        int size = s.size();

        for (int i = 0; i < size; i++)
        {
            int temp = romanNumber[s[i]];
            
            if (i + 1 > 0 && temp < romanNumber[s[i+1]])
                num -= temp;
            else 
                num += temp; 
        };

        return num;
    }
};
