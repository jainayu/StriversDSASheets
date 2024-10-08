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

void insertionSort(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        int j = i;
        while (j > 0 && v[j - 1] > v[j]) {
            swap(v[j], v[j - 1]);
            j--;
        }
    }
    return;
}

int main() {
    cout << "----- Insertion Sort -----" << endl;
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    insertionSort(v1);
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    insertionSort(v2);
    printAfterVector(v2);

    return 0;
}