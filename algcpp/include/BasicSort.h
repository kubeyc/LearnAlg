#ifndef BASIC_SORT_H
#define BASIC_SORT_H

#include <algorithm>
#include "SortTemplate.h"

namespace BasicSort 
{

// 选择排序
template <typename T>
void SelectSort(T* arr, int n, SortTemplate::comp<T> f = SortTemplate::SortComparable<T>::Ascending) {
    for (int i = 0; i < n; i++) {
        int pos = i;
        for (int j = i+1; j < n; j++) {
            if (f(arr[j], arr[pos])) {
                pos = j;
            }
        }

        std::swap(arr[i], arr[pos]);
    }
}

// 插入排序
template <typename T>
void InsertSort(T* arr, int n, SortTemplate::comp<T> f = SortTemplate::SortComparable<T>::Ascending) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (f(arr[j], arr[j-1])) {
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}

// 冒泡排序
template <typename T>
void BubbleSort(T* arr, int n, SortTemplate::comp<T> f = SortTemplate::SortComparable<T>::Ascending) {
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (f(arr[j], arr[i])) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}

// 希尔排序
template<typename T>
void ShellSort(T* arr, int n, SortTemplate::comp<T> f = SortTemplate::SortComparable<T>::Ascending) {

}

}

#endif // BASIC_SORT_H
