class Solution {
public:
    string addBinary(string a, string b) {
        int size_a = a.size();
        int size_b = b.size();
        int max, min, carry = 0;
        string longer, shorter;

        if (size_a <= size_b)
        {
            max = size_b;
            min = size_a;
            longer = b;
            shorter = a;
        }
        else
        {
            min = size_b;
            max = size_a;
            shorter = b;
            longer = a;
        }

        int diff = max - min;
        shorter.insert(0, diff, '0');

        string result(max  + 1, '0');

        for (int i = max - 1; i >= 0; i--)
        {
            int temp = ((longer[i] - '0') + (shorter[i] - '0') + carry);
            result[i+1] = (temp % 2) + '0';
            carry = temp / 2;
        }
        
        if (carry)
        {
            result[0] = '1';        
        }
        else
        {
            result = result.substr(1);   
        }

        return result;
    }
};
