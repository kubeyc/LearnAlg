#include "SortTestHelper.h"

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

int main() {
    int count = 100;
    int *arr = SortTestHelper::generatRandomIntArray(count, 0, count * 10);
    selectionSort(arr, count);
    std::cout<< "is sorted: " << SortTestHelper::isSorted(arr, count, SortTestHelper::reverseOrder) << std::endl;
    SortTestHelper::printArray(arr, count);
}