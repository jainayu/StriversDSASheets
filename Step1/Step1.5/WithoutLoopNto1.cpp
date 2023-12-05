void giveArray(int n, vector<int> &vec) {
    if (n == 0) {
        return;
    }

    vec.push_back(n);
    giveArray(n - 1, vec);
    return;
}
vector<int> printNos(int x) {
    vector<int> vec;

    giveArray(x, vec);

    return vec;
}