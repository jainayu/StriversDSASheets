#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return;
}

void selectionSort(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        int min = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] > v[j]) {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }
    return;
}

int main() {
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    selectionSort(v1);
    printVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    selectionSort(v2);
    printVector(v2);

    return 0;
}