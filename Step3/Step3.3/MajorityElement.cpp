// https://www.codingninjas.com/studio/problems/majority-element_6915220
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
    map<int, int> freq;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }
    vector<int> res;
    for (auto it : freq) {
        if (it.second > n / 3) {
            res.push_back(it.first);
        }
    }
    return res;
}