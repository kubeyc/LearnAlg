#ifndef INC3_SELECTION_SORT_USING_HELPER
#define INC3_SELECTION_SORT_USING_HELPER

#include <cassert>
#include <ctime>
#include <iostream>

namespace SortTestHelper {
    int *generatRandomIntArray(int n, int rangeLeft, int rangeRight) {
        assert(rangeLeft < rangeRight);
        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeRight - rangeLeft + 1) + rangeLeft;
        }
        return arr;
    }

    template <typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout<<std::endl;
    }

    template <typename T>
    bool reverseOrder (T arr[], int i, int j) {
        return arr[i] >= arr[j];
    }

    template <typename T>
    bool order (T arr[], int i, int j) {
        return arr[i] <= arr[j];
    }

    template <typename T>
    bool isSorted(T arr[], int n, bool (*op)(T arr[], int i, int j)) {
        for (int i = 0; i < n - 1; i++) {
            if (!op(arr, i, i+1)) return false;
        }

        return true;
    } 
}

#endif // INC3_SELECTION_SORT_USING_HELPER