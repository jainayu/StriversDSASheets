// Highest / Lowest Frequency Elements
// https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382

vector<int> getFrequencies(vector<int> &v) {
    int n = v.size();
    int minFreq = n;
    int maxFreq = 0;
    int minEle = (int)1e9 + 1;
    ;
    int maxEle = 0;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }

    for (auto it : mp) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        } else if (count == maxFreq) {
            maxEle = element > maxEle ? maxEle : element;
        }

        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        } else if (count == minFreq) {
            minEle = element > minEle ? minEle : element;
        }
    }
    vector<int> res = {maxEle, minEle};

    return res;
}