class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size() - 1;
        int count = 0;

        for (int i = len; i >= 0; i--)
        {
            if (nums.at(i) == val)
            {
                nums.erase(nums.begin() + i);
            }
        }
        return nums.size();
    }
};
