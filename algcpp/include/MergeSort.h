#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "SortTemplate.h"
#include <iostream>
using namespace SortTemplate;

namespace MergeSort {


template <class T>
class MergeSort {
public:
    void operator() (T* arr, int n);
private:
    void recusiveMegreSort(T* arr, int left, int right, comp<T> f = SortComparable<T>::Ascending);
    void merge(T* arr, int left, int mid, int right);
};

template <class T>
void MergeSort<T>::operator() (T*arr, int n) {

    recusiveMegreSort(arr, 0, n-1, SortComparable<T>::Ascending);
}

template <class T>
void MergeSort<T>::recusiveMegreSort(T* arr, int left, int right, comp<T> f) {
    if (left >= right) {
        return;
    }

    int mid =  left + (right - left) / 2;
    recusiveMegreSort(arr, left, mid, f);
    recusiveMegreSort(arr, mid+1, right, f);
    merge(arr, left, mid, right);
}


// 合并[left, mid], [mid+1, right]有序数组为一个有序数组
template <class T>
void MergeSort<T>::merge(T* arr, int left, int mid, int right) {
    int auxSize = right - left + 1;
    T* aux = new T[auxSize];
    for (int i = 0; i < auxSize; i++) {
        aux[i] = arr[i + left];
    }


    int i = left, j = mid + 1;
    for (int k = left; k <= right; k++) {
        if (i > mid) {
            arr[k] = aux[j-left];
            j++;
        } else if (j > right) {
            arr[k] = aux[i-left];
            i++;
        }else if(aux[i-left] < aux[j-left]) {
            arr[k] = aux[i-left];
            i++;
        } else {
            arr[k] = aux[j-left];
            j++;
        }
    }

    delete[] aux;

}


}


//void Sort(T* arr, int n, comp<T> = SortComparable<T>::Ascending) {

//}

//void recusiveMerge

//};
#endif //MERGE_SORT_H
