#include "sort_helper.h"
#include <cassert>
#include <ctime>
int* sort_helper::Helper::GeneratorRandomIntArray(int n, int LR, int RR) {
    assert(LR < RR);
    int *arr = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (LR - RR + 1) + LR;
    }
    return arr;
}
