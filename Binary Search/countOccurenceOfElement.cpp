#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countOccurrences(const vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        int res1 = -1, res2 = -1;

        // find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                res1 = mid;
                right = mid - 1;
            } else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        // find last occurrence
        left = 0;
        right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                res2 = mid;
                left = mid + 1;
            } else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        // handle not found
        if (res1 == -1 || res2 == -1)
            return 0;

        return (res2 - res1 + 1);
    }
};
