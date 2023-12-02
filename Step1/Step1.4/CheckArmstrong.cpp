bool checkArmstrong(int n) {
    int m = n;
    int p = 0;
    while (m != 0) {
        m /= 10;
        p++;
    }

    m = n;
    int sum = 0;
    while (m != 0) {
        int x = m % 10;
        sum += pow(x, p);
        m /= 10;
    }

    return sum == n;
}
