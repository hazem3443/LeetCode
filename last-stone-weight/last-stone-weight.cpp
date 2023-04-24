#include <iostream>
// #include <ranges>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

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