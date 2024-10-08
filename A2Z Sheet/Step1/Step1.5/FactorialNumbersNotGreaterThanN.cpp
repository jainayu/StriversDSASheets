// Factorial Numbers Not Greater Than N
// https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435

void getFactorials(long long n, vector<long long> &numbers, long long curr,
                   int index) {
    if (curr > n) {
        return;
    }

    numbers.push_back(curr);
    getFactorials(n, numbers, curr * (index + 2), index + 1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> numbers;
    getFactorials(n, numbers, 1, 0);
    return numbers;
}
