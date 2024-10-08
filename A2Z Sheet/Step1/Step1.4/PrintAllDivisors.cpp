int *printDivisors(int n) {
    vector<int> numb;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            numb.push_back(i);
            if (i != n / i) {
                numb.push_back(n / i);
            }
        }
    }
    sort(numb.begin(), numb.end());

    int *divisorsArray = new int[numb.size()];
    for (size_t i = 0; i < numb.size(); ++i) {
        divisorsArray[i] = numb[i];
    }

    return divisorsArray;
}