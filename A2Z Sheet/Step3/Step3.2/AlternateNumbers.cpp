// https://www.codingninjas.com/studio/problems/alternate-numbers_6783445

#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int> &a) {
    int pos = 0, neg = 0;
    int size = a.size();
    vector<int> alt;
    while (pos < size && neg < size) {
        while (a[pos] < 0) {
            pos++;
        }
        alt.push_back(a[pos++]);

        while (a[neg] > 0) {
            neg++;
        }

        alt.push_back(a[neg++]);
    }

    return alt;
}