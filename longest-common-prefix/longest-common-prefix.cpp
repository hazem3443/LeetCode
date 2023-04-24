class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
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