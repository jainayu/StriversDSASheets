// Count Frequency in a range
// https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446

vector<int> countFrequency(int n, int x, vector<int> &nums) {
    vector<int> freq(n, 0);

    for (int i = 0; i < n; i++) {
        if (nums[i] <= n) {
            freq[nums[i] - 1]++;
        }
    }

    return freq;
}