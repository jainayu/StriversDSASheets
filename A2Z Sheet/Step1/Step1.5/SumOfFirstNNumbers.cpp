// https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068

long long sumFirstN(long long n) {
    if (n < 1) {
        return 0;
    }
    return (n * (n + 1)) / 2;
}

// // Using Recursion
// long long sumFirstN(long long n) {
//     if (n < 1) {
//         return 0;
//     }
//     return n + sumFirstN(n);
// }
