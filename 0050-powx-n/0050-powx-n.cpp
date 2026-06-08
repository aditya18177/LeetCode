class Solution {
public:
    double power(double x, long long n) {
        if (n == 0) return 1.0;
        if (n % 2 == 1) {
            return x * power(x, n - 1);
        }
        double half = power(x, n / 2);
        return half * half;
    }
    double myPow(double x, int n) {
        long long nn = n;
        if (nn < 0) {
            nn = -nn;
            return 1.0 / power(x, nn);
        }
        return power(x, nn);
    }
};