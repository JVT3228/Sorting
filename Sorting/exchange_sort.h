#ifndef EXCHANGE_SORT_H
#define EXCHANGE_SORT_H

template <typename T>
void exchangeSort(T* arr, int size);

template void exchangeSort<int>(int* arr, int size);
template void exchangeSort<double>(double* arr, int size);

#endif