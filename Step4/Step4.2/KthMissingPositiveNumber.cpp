// https://leetcode.com/problems/kth-missing-positive-number/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findKthPositiveBruteForce1(vector<int> &arr, int k) {
        int cnt = 0;
        int n = 1;
        int size = arr.size();

        if (arr[size - 1] - size < k) {
            return k + size;
        } else if (arr[0] > k) {
            return k;
        } else {
            for (int i = 0; i < size; n++) {
                if (n != arr[i]) {
                    cnt++;
                    if (cnt == k) {
                        return n;
                    }
                } else {
                    i++;
                }
            }
        }
        return n;
    }

    int findKthPositiveBruteForce2(vector<int> &arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] <= k) {
                k++;
            } else {
                break;
            }
        }
        return k;
    }

    int findKthPositiveOptimal(vector<int> &arr, int k) {
        int n = arr.size();

        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int missingTillNow = arr[mid] - (mid + 1);
            if (missingTillNow < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return k + high + 1;
    }
};