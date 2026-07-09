class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int size = digits.size();
        vector<int> v(size, 0);
        v.back() = 1;

        for (int i = 0; i < size; i++)
        {
            result.push_back(v[i] + digits[i]);
        }
        for (int i = result.size()-1; i >= 0; i--)
        {
            if (result[i] > 9)
            {
                int carry = result[i] / 10;        
                result.at(i) = result[i] % 10;
                if (i - 1 >= 0)
                    result.at(i-1) = result.at(i-1) + carry;
                else
                    result.insert(result.begin(), carry);
            }
        }
        return result;
    }
};
