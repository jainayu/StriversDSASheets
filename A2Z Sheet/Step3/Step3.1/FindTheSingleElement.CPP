// https://www.codingninjas.com/studio/problems/find-the-single-element_6680465

#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i += 2) {
        if (arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }
    return arr.back();
}