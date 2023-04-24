class Solution {
public:
    bool isValid(string s) {
        std::vector<char> braces;

        bool boolres = true;
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
                    boolres &= (braces.back() == ((ch==')')?'(':((ch==']')?'[':((ch=='}')?'{':NULL) ) ) );
                    braces.pop_back();
                    break;
                }
                break;
            }
        }

        return (braces.size()==0) & (boolres==true);
    }
};