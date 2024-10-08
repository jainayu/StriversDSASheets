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

void merge(vector<int> &v, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high) {
        if (v[left] < v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            right++;
        }
    }

    // if elements on the left half are still left
    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }

    //  if elements on the right half are still left
    while (right <= high) {
        temp.push_back(v[right]);
        right++;
    }

    // transferring all elements from temporary to arr
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &v, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);

    merge(v, low, mid, high);

    return;
}

int main() {
    cout << "----- Merge Sort -----" << endl;
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    printBeforeVector(v1);
    mergeSort(v1, 0, v1.size() - 1);
    printAfterVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    printBeforeVector(v2);
    mergeSort(v2, 0, v2.size() - 1);
    printAfterVector(v2);

    return 0;
}