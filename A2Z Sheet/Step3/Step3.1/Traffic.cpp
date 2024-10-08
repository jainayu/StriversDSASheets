// https://www.codingninjas.com/studio/problems/traffic_6682625
#include <bits/stdc++.h>
using namespace std;

int traffic(int n, int m, vector<int> vehicle) {
    int start = 0;
    int end = 0;
    int maxLength = INT_MIN;
    while (end < n) {
        if (vehicle[end] == 0) {
            if (m != 0) {
                m--;
                end++;
            } else {
                if (vehicle[start] == 0) {
                    m++;
                }
                start++;
            }
        } else {
            end++;
        }

        maxLength = max((end - start), maxLength);
    }

    return maxLength;
}
