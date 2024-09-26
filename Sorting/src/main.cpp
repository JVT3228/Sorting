#include <iostream>
#include "insertion_sort.h"
#include "selection_sort.h"
#include "exchange_sort.h"
#include "bubble_sort.h"
#include "optimized_bubble_sort.h"

int main() {
    int arr[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    std::cout << "Insertion Sort: ";
    for (int i = 0; i < size; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    int arr2[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    selectionSort(arr2, size);
    std::cout << "Selection Sort: ";
    for (int i = 0; i < size; ++i) std::cout << arr2[i] << " ";
    std::cout << std::endl;

    int arr3[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    exchangeSort(arr3, size);
    std::cout << "Exchange Sort: ";
    for (int i = 0; i < size; ++i) std::cout << arr3[i] << " ";
    std::cout << std::endl;

    int arr4[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    bubbleSort(arr4, size);
    std::cout << "Bubble Sort: ";
    for (int i = 0; i < size; ++i) std::cout << arr4[i] << " ";
    std::cout << std::endl;

    int arr5[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    optimizedBubbleSort(arr5, size);
    std::cout << "Optimized Bubble Sort: ";
    for (int i = 0; i < size; ++i) std::cout << arr5[i] << " ";
    std::cout << std::endl;

    return 0;
}