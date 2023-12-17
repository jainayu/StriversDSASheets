// https://www.codingninjas.com/studio/problems/reading_6845742

#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    // set<int> s;
    unordered_map<int, bool> mp;

    for (int i = 0; i < n; i++) {
        int req = target - book[i];
        if (mp.find(req) != mp.end()) {
            return "YES";
        }

        mp[book[i]] = true;
    }

    return "NO";
}
