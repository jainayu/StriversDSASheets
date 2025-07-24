// Problem: https://leetcode.com/problems/powx-n/description/

class Solution {
  public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }

        if (n % 2 == 0) {
            return myPow(x * x, n / 2);
        }

        // If n is odd then we will multiply with an extra x or 1/x to
        // compensate. If n is negative we will multiply with x else we will
        // multiply with 1/x.
        return myPow(x * x, n / 2) * (n > 0 ? x : (1 / x));
    }
};