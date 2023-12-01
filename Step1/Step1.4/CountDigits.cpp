int countDigits(int n) {
    int m = n;
    int count = 0;
    while (m != 0) {
        int r = m % 10;
        if (r != 0 && n % r == 0) {
            count++;
        }
        m /= 10;
    }
    return count;
}