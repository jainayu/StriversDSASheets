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

int partition(vector<int> &v, int low, int high) {
    int pivot = v[low];
    int i = low;
    int j = high;

    while (i < j) {
        // check one:
        while (v[i] <= pivot && i <= high - 1) {
            i++;
        }

        // check two:
        while (v[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(v[i], v[j]);
        }
    }

    swap(v[low], v[j]);

    return j;
}

void quickSort(vector<int> &v, int low, int high) {
    if (low < high) {
        int pIndex = partition(v, low, high);

        // left sub-array
        quickSort(v, low, pIndex - 1);

        // right sub-array
        quickSort(v, pIndex + 1, high);
    }
    return;
}

int main() {
    cout << "----- Quick Sort -----" << endl;
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    quickSort(v1, 0, v1.size() - 1);
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    quickSort(v2, 0, v2.size() - 1);
    printAfterVector(v2);

    return 0;
}