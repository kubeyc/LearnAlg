#include <algorithm>
#include <iostream>


void selectionSort(int arr[], int n) {
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
    int arr[10] = {11, 6, 89, 10, 4, 90, 120, 77, 198, 92};
    selectionSort(arr, 10);

    for (int i = 0; i < 10; i++) {
        std::cout<< arr[i] << " ";
    }
    std::cout<<std::endl;
}