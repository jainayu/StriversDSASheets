// https://www.codingninjas.com/studio/problems/superior-elements_6783446
#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a) {
    vector<int> supEle;
    int size = a.size();
    int max = a[size - 1];
    supEle.push_back(a[size - 1]);

    for (int i = size - 2; i >= 0; i--) {
        if (a[i] > max) {
            supEle.push_back(a[i]);
            max = a[i];
        }
    }

    return supEle;
}