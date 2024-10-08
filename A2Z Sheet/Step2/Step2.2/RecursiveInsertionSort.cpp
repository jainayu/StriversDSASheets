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

void insertionSort(vector<int> &v, int size, int currentIndex) {
    if (currentIndex == size) {
        return;
    }
    int j = currentIndex;

    while (j > 0 && v[j - 1] > v[j]) {
        swap(v[j], v[j - 1]);
        j--;
    }

    insertionSort(v, size, currentIndex + 1);
    return;
}

int main() {
    cout << "----- Recursive Insertion Sort -----" << endl;
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    insertionSort(v1, v1.size(), 0);
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    insertionSort(v2, v2.size(), 0);
    printAfterVector(v2);

    return 0;
}