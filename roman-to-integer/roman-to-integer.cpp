class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int res=0, prev =0, cur=0;
        int IdxToValRomanLettersList[]  = {
            1,      //I
            5,      //V
            10,     //X
            50,     //L
            100,    //C
            500,    //D
            1000    //M
        };

        //initialize the values 
        int* LettersLookup[256] = {nullptr};
        //set romanletters to value reference
        LettersLookup[((int)'I')] = IdxToValRomanLettersList;
        LettersLookup[((int)'V')] = IdxToValRomanLettersList+1;
        LettersLookup[((int)'X')] = IdxToValRomanLettersList+2;
        LettersLookup[((int)'L')] = IdxToValRomanLettersList+3;
        LettersLookup[((int)'C')] = IdxToValRomanLettersList+4;
        LettersLookup[((int)'D')] = IdxToValRomanLettersList+5;
        LettersLookup[((int)'M')] = IdxToValRomanLettersList+6;

        


        while(i < s.length())
        {
            // switch (s[i++])
            // {
            //     case 'I':
            //         cur = 1;
            //         break;
            //     case 'V':
            //         cur = 5;
            //         break;
            //     case 'X':
            //         cur = 10;
            //         break;
            //     case 'L':
            //         cur = 50;
            //         break;
            //     case 'C':
            //         cur = 100;
            //         break;
            //     case 'D':
            //         cur = 500;
            //         break;
            //     case 'M':
            //         cur = 1000;
            //         break;
            //     default:
            //         break;
            // }
            //we need to validate the lookup list [IVXLCDM]
            
            cur = *LettersLookup[((int)s[i++])];

            if( cur > prev)
            {
                res += cur - (2 * prev) ;
            }
            else
            {
                res += cur;
            }
            prev = cur;
        }
        return res;
    }
};