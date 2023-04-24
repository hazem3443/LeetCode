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
                    switch (ch)
                    {
                        case ')':
                            boolres &= (braces.back() == '(');
                            braces.pop_back();
                            break;
                        case ']':
                            boolres &= (braces.back() == '[');
                            braces.pop_back();
                            break;
                        case '}':
                            boolres &= (braces.back() == '{');
                            braces.pop_back();
                            break;
                        default:
                            break;
                    }

                }

                break;
            default:
                break;
            }
        }

        return (braces.size()==0) & (boolres==true);
    }
};