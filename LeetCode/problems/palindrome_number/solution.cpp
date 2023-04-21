class Solution {
public:
    bool isPalindrome(int x) {
        string str;
        str = to_string(x);
        int i=0, j=str.length()-1, retflag=1;
        while(i!=j && i<j){
            cout << "sizeof str = "<< str.length()<<endl;
            cout <<"i="<<i<<",j="<<j<<endl;
            cout <<"str[i]="<<str[i]<<",str[j]="<<str[j]<<endl;
            if(str[i++] != str[j--]){
                retflag=0;
                break;
            }
            // i++,j--;
        }
        return retflag;
    }
};