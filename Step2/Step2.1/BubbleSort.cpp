#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return;
}

void bubbleSort(vector<int> &v) { return; }

int main() {
    vector<int> v1 = {13, 46, 24, 52, 20, 9};
    bubbleSort(v1);
    printVector(v1);

    vector<int> v2 = {5, 4, 3, 2, 1};
    bubbleSort(v2);
    printVector(v2);

    return 0;
}