#include "BasicSort.h"

#include "MergeSort.h"

#include "sort_helper.h"
#include <iostream>

using namespace sort_helper;
int main()
{

    int n = 100000;
    int *arr = sort_helper::Helper::GeneratorRandomIntArray(n, 0, n);

    MergeSort::MergeSort<int> mer;
    mer(arr, n);

//    Sort::Sort<int, BasicSort::BubbleSort>(arr, 6);
//    for (int i = 0; i < n; i++) {
//         std::cout << arr[i];
//        if (i != n-1) {
//            std::cout <<", ";
//        }
//    }

    std::cout << std::endl;
}
