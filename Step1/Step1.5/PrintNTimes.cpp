void add(vector<string> &hw, int n) {
    if (n == 0) {
        return;
    }
    add(hw, n - 1);
    hw.push_back("Hello World!");
    return;
}
vector<string> printNTimes(int n) {
    vector<string> hw;
    add(hw, n);
    return hw;
}