class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n0 = 0, n = nums.size();

        while (n0 < n)
        {
            int mid = (n0 + n) / 2;
            if (nums[mid] < target)
            {
                n0 = mid + 1;
            }
            else 
            {
                n = mid;
            }
        }
        return n0;
    }
};
