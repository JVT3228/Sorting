#ifndef OPTIMIZED_BUBBLE_SORT_H
#define OPTIMIZED_BUBBLE_SORT_H

template <typename T>
void optimizedBubbleSort(T* arr, int size);

template void optimizedBubbleSort<int>(int* arr, int size);
template void optimizedBubbleSort<double>(double* arr, int size);

#endif