class Solution {
public:
    int mySqrt(int x) {
        long start = 0, end = x, ans = 0;

        if (x == 0) return 0;

        while (start <= end)
        {
            long mid = (start + end) / 2;
            long sq = mid * mid; 
            
            if (sq == x)
            {
                return (int)mid;
            }
            else if (sq < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return int(ans);
    }
};
