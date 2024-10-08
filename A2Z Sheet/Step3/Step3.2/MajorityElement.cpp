// https://www.codingninjas.com/studio/problems/majority-element_6783241
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int size = v.size();
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++) {
        freq[v[i]]++;
    }

    for (auto &it : freq) {
        if (it.second > size / 2) {
            return it.first;
        }
    }
    return -1;
}