/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <chrono>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::vector<char> braces;

        bool boolres = true;

        char cases[256];
        cases[')'] = '(';
        cases[']'] = '[';
        cases['}'] = '{';

        for(const auto &ch: s)
        {
            switch (ch)
            {
            case '(':
            case '[':
            case '{':
                braces.push_back(ch);
                break;
            case ')':
            case ']':
            case '}':
                if(braces.size()==0)
                    return 0;
                else{
                    boolres &= (braces.back() == cases[ch]);//((ch==')')?'(':((ch==']')?'[':((ch=='}')?'{':NULL) ) ) );
                    braces.pop_back();
                    break;
                }
                break;
            }
        }

        return (braces.size()==0) & (boolres==true);
    }
};
// @lc code=end

int main()
{
    Solution s;

    std::chrono::duration<double> duration = std::chrono::high_resolution_clock::now() - std::chrono::high_resolution_clock::now();
    std::cout << "avg. Elapsed time: " << duration.count() << " seconds" << std::endl;
    #define iterations 10000
    for (size_t i = 0; i < iterations; i++)
    {
        auto start = std::chrono::high_resolution_clock::now();
        
        std::cout << "res = " << (s.isValid("()") ? "True" : "False") << " should true" << std::endl;    // true
        std::cout << "res = " << (s.isValid("()[]{}") ? "True" : "False")<< " should true" << std::endl; // true
        std::cout << "res = " << (s.isValid("(]") ? "True" : "False") << " should false"<< std::endl;    // false
        std::cout << "res = " << (s.isValid("{[]}") ? "True" : "False") << " should true"<< std::endl;   // true
        std::cout << "res = " << (s.isValid("([)]") ? "True" : "False") << " should false" << std::endl; // false
        std::cout << "res = " << (s.isValid("[") ? "True" : "False") << " should false" << std::endl; // false
        std::cout << "res = " << (s.isValid("({{{{}}}))") ? "True" : "False") << " should false" << std::endl; // false
        
        auto end = std::chrono::high_resolution_clock::now();
        duration += end - start;
    }

    duration/=iterations;
    std::cout << "avg. Elapsed time: " << duration.count() << " seconds" << std::endl;

}