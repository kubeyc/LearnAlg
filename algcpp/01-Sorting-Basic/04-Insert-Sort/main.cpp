#include "SortTestHelper.h"

// 插入排序优化: 减少交换次数
template <typename T>
void insertSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        // 首先保存插入的元素swaped
        int j;
        T swaped = arr[i];

        // 从j开始, 如果满足交换条件(排序顺序)则将j-1位置的元素后移, 直到找到swaped元素的插入位置
        for (j = i; j > 0 && swaped > arr[j-1]; j--) {
            arr[j] = arr[j-1];
        }

        // 将swaped赋值给j索引处的元素
        arr[j] = swaped;
    }
}

int main() {
    int count = 10000;
    int *arr = SortTestHelper::generatRandomIntArray(count, 0, 1);
    SortTestHelper::benchmark(std::string("insertSort"), arr, count, insertSort, SortTestHelper::reverseOrder);
    delete []arr;
    
    return 0;
}