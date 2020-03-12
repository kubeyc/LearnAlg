#include <algorithm>
#include <iostream>
#include "student.h"

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
    Student students[5] = {{"D", 100}, {"C", 100}, {"B", 100}, {"A", 100}, {"E", 100}};
    selectionSort(students, 5);
    for (int i = 0 ; i < 5; i++) {
        std::cout<<students[i];
    }
    std::cout << std::endl;
}