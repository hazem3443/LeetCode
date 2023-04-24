class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int maxmatchidx_of_each_str_in_vect=1000;

        while (strs.size() != 1)
        {
        std::vector<std::string>::iterator it = strs.begin();

        std::string s1=strs[0], s2=strs[1];
        int i=0;
        while( (s1[i] == s2[i]) && i++ < (s1.size()>s2.size()?s1.size():s2.size()) );

        maxmatchidx_of_each_str_in_vect =\
                i<maxmatchidx_of_each_str_in_vect?i:maxmatchidx_of_each_str_in_vect;
   
            strs.erase(strs.begin());
        }
        
        return strs[0].substr(0, maxmatchidx_of_each_str_in_vect);
    }
};