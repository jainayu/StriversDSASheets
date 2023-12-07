void generateFibonacciNumbers(vector<int> &numb, int curr, int n) {
    if (curr >= n) {
        return;
    }

    numb[curr] = numb[curr - 2] + numb[curr - 1];
    generateFibonacciNumbers(numb, curr + 1, n);
    return;
}
vector<int> generateFibonacciNumbers(int n) {
    vector<int> numb(n);

    numb[0] = 0;
    if (n > 1) {
        numb[1] = 1;
        generateFibonacciNumbers(numb, 2, n);
    }

    return numb;
}