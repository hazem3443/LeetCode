/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <limits>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        int maxmatchidx_of_each_str_in_vect = std::numeric_limits<int>::max();

        while (strs.size() != 1)
        {
            int i=0;
            while( (strs[0][i] == strs[1][i]) && i++ < (strs[0].size()>strs[1].size()?strs[0].size():strs[1].size()) );

            maxmatchidx_of_each_str_in_vect =\
                    i<maxmatchidx_of_each_str_in_vect?i:maxmatchidx_of_each_str_in_vect;
    
            strs.erase(strs.begin());
        }

        return strs[0].substr(0, maxmatchidx_of_each_str_in_vect);
    }
};
// @lc code=end

int main()
{
    Solution S;

    std::vector<std::string> strs1 = {"flower","flow","flight"};
    std::cout << S.longestCommonPrefix(strs1) << std::endl;

    std::vector<std::string> strs2 = {"dog","racecar","car"};
    std::cout << S.longestCommonPrefix(strs2) << std::endl;

    return 0;
}