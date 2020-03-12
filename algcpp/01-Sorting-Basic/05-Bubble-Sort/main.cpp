#include "SortTestHelper.h"

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isSwap = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                isSwap = true;
                std::swap(arr[i], arr[j]);
            }
        }

        if (!isSwap) {
            break;
        }
    }
}

int main(int argc, char const *argv[]) {
    int count = 100;
    int *arr = SortTestHelper::generatRandomIntArray(count, 0, count);
    SortTestHelper::printArray(arr, count);
    bubbleSort(arr, count);
    SortTestHelper::printArray(arr, count);
    delete []arr;
    return 0;
}
