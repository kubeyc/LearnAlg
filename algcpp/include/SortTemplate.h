
#ifndef SORT_TEMPLATE_H
#define SORT_TEMPLATE_H

#include <ctime>
#include <cassert>
namespace SortTemplate
{

template <typename T>
using comp = bool(*)(const T& i, const T& j);

class Helper {
public:
    int* generatorRandomIntArray(int n, int LR, int RR) {
        assert(LR < RR);
        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (LR - RR + 1) + LR;
        }
        return arr;
    }
};

template <typename T>
struct SortComparable {
    

    static inline bool Ascending(const T& i, const T& j) {
        return i < j;
    }

    static inline bool Descending(const T& i, const T& j) {
        return i > j;
    }

};

};

#endif // SORT_TEMPLATE_H

#ifndef SORT_NAMESPACE
#define SORT_NAMESPACE

namespace Sort {
template <typename T, void (*SORT)(T*, int, SortTemplate::comp<T> = SortTemplate::SortComparable<T>::Ascending)>
void Sort(T* arr, int n, SortTemplate::comp<T> f = SortTemplate::SortComparable<T>::Ascending) {
    SORT(arr, n, f);
}

}
#endif // SORT_NAMESPACE
