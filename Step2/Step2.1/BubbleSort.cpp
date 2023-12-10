#include <bits/stdc++.h>
using namespace std;

void printBeforeVector(vector<int> v) {
    cout << "[ ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "] -> ";
    return;
}

void printAfterVector(vector<int> v) {
    cout << "[ ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "] ";
    cout << endl;
    return;
}

void bubbleSort(vector<int> &v) {
    int size = v.size();

    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return;
}

int main() {
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    bubbleSort(v1);
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    bubbleSort(v2);
    printAfterVector(v2);

    return 0;
}