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

void bubbleSort(vector<int> &v, int size) {
    if (size == 1) {
        return;
    }

    int flag = 0; // to improve the best case, when array is already sorted

    for (int j = 0; j < size - 1; j++) {
        if (v[j] > v[j + 1]) {
            swap(v[j], v[j + 1]);
            flag = 1;
        }
    }

    if (flag == 0) {
        return;
    }

    bubbleSort(v, size - 1);
    return;
}

int main() {
    cout << "----- Recursive Bubble Sort -----" << endl;
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    bubbleSort(v1, v1.size());
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    bubbleSort(v2, v2.size());
    printAfterVector(v2);

    vector<int> v3 = {10, 20, 30, 40, 50};
    printBeforeVector(v3);
    bubbleSort(v3, v3.size());
    printAfterVector(v3);

    return 0;
}