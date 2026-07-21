class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n;

        for(int i = size(nums1)-1; i >= m; i--)
        {
            nums1.pop_back();
        }

        for (int i = 0; i < n; i++)
        {
            nums1.push_back(nums2[i]);
        }

        for (int i = 0; i < k - 1; i++)
        {
            for (int j = 0; j < k - 1; j++)
            {
                if (nums1[j] > nums1[j+1])
                {
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
    }
};
