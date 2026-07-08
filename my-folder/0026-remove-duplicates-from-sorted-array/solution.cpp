class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        for (int i = 0; i <= nums.size() - 1; i++)
        {
            for (int j = nums.size() - 1; j > i; j--)
            {
                if (nums.at(i) == nums.at(j))
                {
                    nums.erase(nums.begin() + j);
                }
            }
        }
        return nums.size();
    }
};
