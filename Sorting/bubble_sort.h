#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template <typename T>
void bubbleSort(T* arr, int size);

template void bubbleSort<int>(int* arr, int size);
template void bubbleSort<double>(double* arr, int size);

#endif