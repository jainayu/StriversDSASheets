// https://www.naukri.com/code360/problems/square-root-integral_893351

int floorSqrt(int n) {
    int low = 1, high = n;
    int ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sq = mid * mid;

        if (sq <= (long long)n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return high;
}
