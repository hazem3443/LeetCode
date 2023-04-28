class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        for (auto num : nums)
        {
            if (num >= target)
            {
                // idx++;
                break;
            }
            idx++;
        }
        return idx;
    }
};