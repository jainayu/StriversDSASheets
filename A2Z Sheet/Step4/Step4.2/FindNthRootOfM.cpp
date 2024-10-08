// https://www.naukri.com/code360/problems/nth-root-of-m_1062679

int comp(int mid, int n, int m) {
    long long res = 1;
    while (n) {
        res *= mid;
        if (res > m) {
            return -1;
        }
        n--;
    }

    if (res == m) {
        return 1;
    }

    return 0;
}

int NthRoot(int n, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int res = comp(mid, n, m);

        if (res == 1) {
            return mid;
        }

        if (res == 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}