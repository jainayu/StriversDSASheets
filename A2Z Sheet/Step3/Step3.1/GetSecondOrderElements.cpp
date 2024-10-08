#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> res;
    if (n < 2) {
        res = {-1, -1};
        return res;
    }
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    int large = INT_MIN;
    int secondLarge = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] < small) {
            secondSmall = small;
            small = a[i];
        } else if (a[i] < secondSmall && a[i] != small) {
            secondSmall = a[i];
        }

        if (a[i] > large) {
            secondLarge = large;
            large = a[i];
        } else if (a[i] > secondLarge && a[i] != large) {
            secondLarge = a[i];
        }
    }

    res = {secondLarge, secondSmall};

    return res;
}
