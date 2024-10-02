#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

template <typename T>
void insertionSort(T* arr, int size);

template void insertionSort<int>(int* arr, int size);
template void insertionSort<double>(double* arr, int size);

#endif