class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        
        /* variables */
		long mydividend  = labs(dividend);
        long mydivisor   = labs(divisor);
        long ans = 0;
        
        /* main steps */
        long sign = dividend > 0 ^ divisor > 0? -1 : 1;  // decide the sign, ^ operator: 1^0 = 1, 0^1 = 1, 0^0 = 0, 1^1 = 0
		while (mydividend >= mydivisor) {
			long temp  = mydivisor;
            long count = 1;
            
			while ((temp<<1) <= mydividend) {
				temp  <<= 1;
				count <<= 1;
			}
			mydividend -= temp;
			ans += count;
		}
		return sign *ans;
    }
};