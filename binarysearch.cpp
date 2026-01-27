#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int n = arr.size();
        int first = -1, last = -1;

        int left = 0, right = n - 1;
        while (left < right) {
            int mid = (left + right) / 2;

            if (arr[mid] >= x)
                right = mid;
            else
                left = mid + 1;
        }

        if (arr[left] != x)
            return {-1};

        first = left;

        left = 0;
        right = n - 1;
        while (left < right) {
            int mid = (left + right + 1) / 2; 

            if (arr[mid] <= x)
                left = mid;
            else
                right = mid - 1;
        }

        last = left;

        return {first, last};
    }
};
