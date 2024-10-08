// https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740

#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &a) {
    int size = a.size();
    if (size == 0) {
        return 0;
    }

    int maxLen = 1;
    unordered_set<int> st;

    for (int i = 0; i < size; i++) {
        st.insert(a[i]);
    }

    for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;

            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }

            maxLen = max(maxLen, cnt);
        }
    }
    return maxLen;
}