// https://www.codingninjas.com/studio/problems/subarrays-with-xor-k_6826258

#include <bits/stdc++.h>
using namespace std;

int subArraysWithXORK(vector<int> a, int b) {
    int size = a.size();
    int xr = 0;
    map<int, int> mp;
    mp[xr]++;
    int cnt = 0;

    for (int i = 0; i < size; i++) {
        xr ^= a[i];
        int x = xr ^ b;
        cnt += mp[x];
        mp[xr]++;
    }

    return cnt;
}