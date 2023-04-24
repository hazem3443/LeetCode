/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <ranges>

class Range
{
public:
    class Iterator
    {
    public:
        Iterator(int value) : value(value) {}
        int operator*() const { return value; }
        bool operator!=(Iterator other) const { return value != other.value; }
        Iterator &operator++()
        {
            ++value;
            return *this;
        }

    private:
        int value;
    };

    Range(int begin, int end) : begin_(begin), end_(end) {}
    Iterator begin() const { return Iterator(begin_); }
    Iterator end() const { return Iterator(end_); }

private:
    int begin_;
    int end_;
};

class Solution
{
public:
    int lastStoneWeight(std::vector<int> &stones)
    {


        // for (int idx : Range(0, stones.size()))
        // {
        //     std::cout << "remove " << stones[idx] <<std::endl;
        //     if()
        //     stones.erase(stones.begin());
        //     std::cout << "Size of stones " << stones.size() <<std::endl;

        // }

        while (stones.size() > 1)
        {
            std::sort(stones.rbegin(), stones.rend());
            if(stones[0] != stones[1])
            {
                int y = stones[0];
                stones.erase(stones.begin());
                int x = stones[0];
                stones.erase(stones.begin());
                stones.insert(stones.end(),y-x);
            }
            else
            {
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
        }

        return stones.size()?stones[0]:0;

    }
};

int main()
{
    // Create an instance of the Solution class
    Solution solution;

    // Create a vector of integers representing the stone weights
    std::vector<int> stones = {2, 7, 4, 1, 8, 1};

    // Call the lastStoneWeight function of the Solution class on the vector of stones
    int lastStoneWeight = solution.lastStoneWeight(stones);

    // Print the result
    std::cout << "The last stone weight is: " << lastStoneWeight << std::endl;
}
// @lc code=end
