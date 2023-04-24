/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {

        std::vector<int> result;

        for (auto it0 = nums.begin(); it0 != nums.end(); it0++)
        {
            for (auto it1 = it0 + 1; it1 != nums.end(); it1++)
            {
                if ((*it0 + *it1) == target)
                {
                    const auto index0 = std::distance(nums.begin(), it0);
                    const auto index1 = std::distance(nums.begin(), it1);

                    result.insert(result.begin(), index0);
                    result.insert(result.begin() + 1, index1);
                }
            }
        }
        return result;
    }
};
// @lc code=end
