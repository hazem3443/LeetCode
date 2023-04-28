class Solution {
public:
    int lengthOfLastWord(string s) {
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