/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> result;

        // std::cout <<"first"<<std::endl;
        for (auto it0 = nums.begin(); it0 != nums.end(); it0++)
        {
            for (auto it1 = it0+1; it1 != nums.end(); it1++)
            {
                // std::cout <<"it0= "<<*it0<<" it1= "<<*it1 <<std::endl;
                if ((*it0 + *it1) == target)
                {
                    const auto index0 = std::distance(nums.begin(), it0);
                    const auto index1 = std::distance(nums.begin(), it1);

                    // std::cout <<"idx0= "<<index0<<" idx1= "<<index1 <<std::endl;
                    // insert at result index 0
                    result.insert(result.begin(), index0);
                    // insert at result index 1
                    result.insert(result.begin() + 1, index1);
                }
            }
        }
        return result;

        // vector<int> idxs;
        // std::cout <<"second"<<std::endl;
        // for(int i=0; i<nums.size();i++){
        //     for(int j=i+1; j<nums.size();j++){
        //         std::cout <<"it0= "<<nums[i]<<" it1= "<<nums[j] <<std::endl;

        //         if((nums[i] + nums[j])==target){
        //             std::cout <<"idx0= "<<i<<" idx1= "<<j <<std::endl;

        //             idxs.insert(idxs.begin(), i);
        //             idxs.insert(idxs.begin()+1, j);
        //         }
        //     }
        // }
        // return idxs;

        // // // remove duplicates from result vector
        // std::sort(result.begin(), result.end());
        // auto it = std::unique(result.begin(), result.end());
        // // if (result.size() > 2)
        // // {
        // //     //return only last two elements [3,2,4]\n6
        // //     result.erase(it, result.end());
        // // }
        // // else
        // // {
            // result.erase(it, result.end());
        // }

    }
};
// @lc code=end
