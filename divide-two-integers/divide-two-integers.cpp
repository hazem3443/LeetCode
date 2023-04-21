class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        bool neg = (dividend < 0) ^ (divisor < 0);
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long res = 0;
        
        while (a >= b) {
            long long temp = b;
            long long cnt = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                cnt <<= 1;
            }
            a -= temp;
            res += cnt;
        }
        
        return (neg ? -res : res);
    }
};