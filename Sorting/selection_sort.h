#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

template <typename T>
void selectionSort(T* arr, int size);

template void selectionSort<int>(int* arr, int size);
template void selectionSort<double>(double* arr, int size);

#endif