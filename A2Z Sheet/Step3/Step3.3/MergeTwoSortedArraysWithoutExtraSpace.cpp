// https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839

#include <bits/stdc++.h>
using namespace std;

// Approach 00
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
                                           vector<long long> &b) {
    int i = 0;

    while (i < a.size()) {
        if (a[i] > b[0]) {
            swap(a[i], b[0]);
            sort(b.begin(), b.end());
        }
        i++;
    }
}

// Approach 01
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
                                           vector<long long> &b) {
    int n = a.size();
    int m = b.size();

    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m) {
        if (a[left] > b[right]) {
            swap(a[left], b[right]);
            left--, right++;
        } else {
            break;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

// Approach 03: Gap approach (Shell Sort)

// void swapIfGreater(vector<long long> &a, vector<long long> &b, int index1,
//                    int index2) {

//     if (a[index1] > b[index2]) {
//         swap(a[index1], b[index2]);
//     }
// }

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a,
//                                            vector<long long> &b) {
//     int n = a.size();
//     int m = b.size();
//     int len = n + m;
//     int gap = (len / 2) + (len % 2);

//     while (gap > 0) {
//         int left = 0;
//         int right = left + gap;

//         while (right < len) {
//             if (left < n && right >= n) {
//                 swapIfGreater(a, b, left, right - n);
//             } else if (left >= n) {
//                 swapIfGreater(a, b, left - n, right - n);
//             } else {
//                 swapIfGreater(a, b, left, right);
//             }
//             left++, right++;
//         }
//         if (gap == 1) {
//             break;
//         }

//         gap = (gap / 2) + (gap % 2);
//     }
// }