/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int idx = s.size();
        while (s[--idx] == ' ' && idx != 0);
        // std::cout << "size " << s.size() << " idx=" << idx << std::endl;
        if (idx == 0)
            return 1;
        
        int idx2 = idx;
        while (s[idx2] != ' ' && idx2-- != 0);
        // std::cout << "idx " << idx << " idx2=" << idx2 << std::endl;
        idx -= idx2;
        
        return idx;
    }
};
// @lc code=end
