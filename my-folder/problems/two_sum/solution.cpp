class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idxs;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if((nums[i] + nums[j])==target){
                    idxs.insert(idxs.begin(), i);
                    idxs.insert(idxs.begin()+1, j);
                }
            }
        }
        return idxs;
    }
};