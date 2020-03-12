#include "SortTestHelper.h"

// __merge 合并 [l, mid] 和 [mid + 1, r] 有序数组为 一个有序数组
template <typename T>
void __merge(T arr[], int l, int mid, int r) {
    T *aux = new T[r-l+2];


    delete []arr; 
}

// __mergeSortTopDown 使用自顶向下(递归)的方式排序[l,r]区间的元素
template <typename T>
void __mergeSortTopDown(T arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = l + (r - l) / 2;
    __mergeSortTopDown(arr, l, mid);
    __mergeSortTopDown(arr, mid + 1, r);
    __merge(arr, l, mid, r);
}

template <typename T>
void mergeSort(T arr[], int n) {
    __mergeSortTopDown();
}