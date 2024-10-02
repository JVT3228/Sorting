#include "catch.hpp"
#include "selection_sort.cpp"
#include <algorithm>

TEST_CASE("Selection Sort Tests 1") {
    int arr1[] = { 4, 0, 15, 6, 12, 2, 14, 8 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int expected1[] = { 0, 2, 4, 6, 8, 12, 14, 15 };
    selectionSort(arr1, size1);
    REQUIRE(std::equal(arr1, arr1 + size1, expected1));
}

TEST_CASE("Selection Sort Tests 2") {
    int* arr2 = nullptr;
    int size2 = 0;
    selectionSort(arr2, size2);
    REQUIRE(size2 == 0);
}

TEST_CASE("Selection Sort Tests 3") {
    int arr3[] = { 5 }; 
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int expected3[] = { 5 };
    selectionSort(arr3, size3);
    REQUIRE(std::equal(arr3, arr3 + size3, expected3));
}