#include "sortings.hpp"

void biv::my_sort(int *arr, const int size) {
    for (int i = 1; i < size; i++) {
        const int value = arr[i];
        int j = i;

        while (j > 0 && value < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = value;
    }
}

