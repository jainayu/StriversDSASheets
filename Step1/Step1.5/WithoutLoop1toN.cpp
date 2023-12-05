void giveArray(int n, vector<int> &vec, int curr) {
    vec.push_back(curr);

    if (n != curr) {
        giveArray(n, vec, curr + 1);
    }

    return;
}
vector<int> printNos(int x) {
    vector<int> vec;

    if (x == 0) {
        return vec;
    }

    giveArray(x, vec, 1);

    return vec;
}