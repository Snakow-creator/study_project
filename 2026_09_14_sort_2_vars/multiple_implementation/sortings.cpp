#include "sortings.hpp"

void biv::my_sort(int *arr, const int size) {
    for (int i = 1; i < size; i++) {
        const int value = arr[i];
        int n = i;

        // сдвигаем большие элементы вправо, пока не найдём место для value
        while (n > 0 && value < arr[n - 1]) {
            arr[n] = arr[n - 1];
            n--;
        }

        arr[n] = value;
    }
}

