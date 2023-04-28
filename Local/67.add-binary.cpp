/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
#include <iostream>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res = "";
        bool carry = 0;
        while ((a.size() != 0) | (b.size() != 0))
        {
            switch (\
                    ( (((b.size())?b[(b.size()-1)]:'0')=='1')) << 1 |\
                    ( (((a.size())?a[(a.size()-1)]:'0')=='1'))\
            )
            {
            case 0:
                res.insert(0,(carry?"1":"0"));
                carry=0;
                break;
            case 1:
            case 2:
                res.insert(0,(carry?"0":"1"));
                break;
            case 3:
                res.insert(0,(carry?"1":"0"));
                carry=1;
                break;
            default:
                break;
            }
            (a.size()!=0)?a.pop_back():void();
            (b.size()!=0)?b.pop_back():void();
        }
        res.insert(0,(carry?"1":""));
        return res;
    }
};
// @lc code=end

int main()
{
    Solution s;

    cout<< s.addBinary("11", "1") <<endl;
    cout<< s.addBinary("11", "1") <<endl;

    return 0;
}
