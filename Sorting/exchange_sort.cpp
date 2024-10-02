#include "exchange_sort.h"
#include <algorithm>

template <typename T>
void exchangeSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}
