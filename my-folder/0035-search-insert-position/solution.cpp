class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();

        for (int i = 0; i < (int)nums.size(); i++)
        {
            if (nums[i] >= target)
            {
                return i;
            }
        }
        return size;
    }
};
